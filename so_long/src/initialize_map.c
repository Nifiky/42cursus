/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:51:36 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:51:49 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	process_line(t_game_root *root, char **file, char *line)
{
	char	*tmp;

	tmp = ft_strjoin(*file, line);
	if (!tmp)
	{
		free(*file);
		free(line);
		root_destroy(root, "process_line(): ft_strjoin()", errno);
	}
	free(*file);
	*file = tmp;
	free(line);
	if (!*file)
		root_destroy(root, "process_line(): ft_strjoin()", errno);
}

static char	*file_init(t_game_root *root)
{
	char	*file;

	file = ft_calloc(1, sizeof(char));
	if (!file)
		root_destroy(root, "file_init(): ft_calloc()", errno);
	return (file);
}

void	map_width(t_game_root *root, char *file)
{
	root->game->map_width = 0;
	while (file[root->game->map_width] && file[root->game->map_width] != '\n')
		root->game->map_width++;
	if ((root->game->map_width > 49
			|| root->game->map_width == 0 || file[root->game->map_width] == 0))
	{
		free(file);
		root_destroy(root, "map is invalid", 0);
	}
}

static void	read_map_file(t_game_root *root, char *file)
{
	map_width(root, file);
	calculate_map_height(root, file);
	map_isvalid(root, file);
	root->game->collectables = (t_coordinates *)malloc(sizeof(t_coordinates)
			* root->game->total_collectables);
	if (root->game->collectables == 0)
	{
		free(file);
		root_destroy(root, "read_map_file(): malloc() collectibles", errno);
	}
	root->game->game_map = (int **)malloc(sizeof(int *)
			* root->game->map_height);
	if (root->game->game_map == 0)
	{
		free(file);
		root_destroy(root, "read_map_file(): malloc() game_map", errno);
	}
	map_parsing(root, file);
}

void	initialize_map(t_game_root *root, char *filename)
{
	int		fd;
	char	*file;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		root_destroy(root, filename, errno);
	file = file_init(root);
	line = get_next_line(fd);
	while (line)
	{
		process_line(root, &file, line);
		line = get_next_line(fd);
	}
	close(fd);
	read_map_file(root, file);
	free(file);
}
