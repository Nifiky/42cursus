/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_isvalid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:52:10 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:52:29 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	isborder(t_game_root *root, int pos)
{
	if (pos < root->game->map_width
		|| pos > (root->game->map_width + 1) * (root->game->map_height - 1)
		|| pos % (root->game->map_width + 1) == 0
		|| pos % (root->game->map_width + 1) == root->game->map_width - 1)
		return (1);
	return (0);
}

static void	isvalid(t_game_root *root, char *file, int position)
{
	if (file[position] == 'P')
		root->game->total_players++;
	else if (file[position] == 'E')
		root->game->total_exits++;
	else if (file[position] == 'C')
		root->game->total_collectables++;
	else if (file[position] == '1' || file[position] == '0')
		return ;
	else
	{
		free(file);
		root_destroy(root, "map content is invalid", 0);
	}
}

void	map_isvalid(t_game_root *root, char *file)
{
	int		position;

	position = -1;
	while (file[++position] != 0)
	{
		if (file[position] == '\n')
			continue ;
		if (isborder(root, position))
		{
			if (file[position] != '1')
			{
				free(file);
				root_destroy(root, "map isn't surrounded by walls", 0);
			}
		}
		else
			isvalid(root, file, position);
	}
	if (root->game->total_players != 1
		|| root->game->total_exits != 1
		|| root->game->total_collectables < 1)
	{
		free(file);
		root_destroy(root, "map configuration is invalid", 0);
	}
}

void	calculate_map_height(t_game_root *root, char *file)
{
	int		i;
	int		line_length;

	i = 0;
	root->game->map_height = 0;
	while (file[i] != '\0')
	{
		line_length = 0;
		while (file[i] != '\0' && file[i] != '\n')
		{
			line_length++;
			i++;
		}
		if (line_length > 0)
			root->game->map_height++;
		if (root->game->map_width != line_length
			|| root->game->map_height >= 50)
		{
			free(file);
			root_destroy(root, "map is invalid", 0);
		}
		if (file[i] == '\n')
			i++;
	}
}

void	free_game_resources(t_game_state *game)
{
	int				i;

	if (game != 0)
	{
		if (game->collectables != 0)
			free(game->collectables);
		if (game->game_map != 0)
		{
			i = 0;
			while (i < game->map_height)
				free(game->game_map[i++]);
			free(game->game_map);
		}
		free(game);
	}
}
