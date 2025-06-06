/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:52:41 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:52:51 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_matrix(t_game_root *root, char *file, int **m, int size)
{
	int				i;

	i = 0;
	while (i < size)
		free(m[i++]);
	free(m);
	root->game->game_map = 0;
	free(file);
	root_destroy(root, "map_parsing(): malloc()", errno);
}

static void	get_coordinates(t_game_root *root, char *file, int k, int *obj)
{
	if (file[k] == 'P')
	{
		root->game->player_position.x = k % (root->game->map_width + 1);
		root->game->player_position.y = k / (root->game->map_width + 1);
		file[k] = '0';
	}
	else if (file[k] == 'E')
	{
		root->game->exit_position.x = k % (root->game->map_width + 1);
		root->game->exit_position.y = k / (root->game->map_width + 1);
		file[k] = '0';
	}
	else if (file[k] == 'C')
	{
		root->game->collectables[*obj].x = k
			% (root->game->map_width + 1);
		root->game->collectables[*obj].y = k
			/ (root->game->map_width + 1);
		file[k] = '0';
		(*obj)++;
	}
}

void	map_parsing(t_game_root *root, char *file)
{
	int				i;
	int				j;
	int				k;
	int				obj;

	obj = 0;
	k = 0;
	j = -1;
	while (++j < root->game->map_height)
	{
		root->game->game_map[j] = (int *)malloc(sizeof(int)
				* root->game->map_width);
		if (root->game->game_map[j] == 0)
			free_matrix(root, file, root->game->game_map, j);
		i = 0;
		while (i < root->game->map_width)
		{
			get_coordinates(root, file, k, &obj);
			root->game->game_map[j][i++] = file[k++] - 48;
		}
		k++;
	}
}

t_coordinates	find_starting_position(char **map, t_coordinates size)
{
	t_coordinates	pos;
	int				row;
	int				col;

	pos.y = -1;
	pos.x = -1;
	row = 0;
	while (row < size.x)
	{
		col = 0;
		while (col < size.x)
		{
			if (map[row][col] == 0)
			{
				pos.y = row;
				pos.x = col;
				return (pos);
			}
			col++;
		}
		row++;
	}
	return (pos);
}
