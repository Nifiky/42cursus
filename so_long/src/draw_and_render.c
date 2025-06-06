/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_and_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:48:30 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 22:09:41 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	draw_image(t_game_root *root, t_img *img, int x, int y)
{
	unsigned int	color;
	int				i;
	int				j;

	j = 0;
	while (j < 40)
	{
		i = 0;
		while (i < 40)
		{
			color = mlx_get_pixel(img, i, j);
			if (color != mlx_rgb_to_int(0, 255, 255, 255))
				mlx_draw_pixel(root->mlx_img, x + i, y + j, color);
			i++;
		}
		j++;
	}
}

static void	draw_environment_objects(t_game_root *root, int x, int y)
{
	int				k;

	if (root->game->exit_position.x == x && root->game->exit_position.y == y)
		draw_image(root, root->exit_image, x * 40, y * 40);
	k = -1;
	while (++k < root->game->total_collectables)
		if (root->game->collectables[k].x == x
			&& root->game->collectables[k].y == y)
			draw_image(root, root->collectable_image, x * 40, y * 40);
	if (root->game->player_position.x == x
		&& root->game->player_position.y == y)
		draw_image(root, root->player_img, x * 40, y * 40);
}

static void	render_game_map(t_game_root *root)
{
	int				x;
	int				y;

	y = 0;
	while (y < root->game->map_height)
	{
		x = 0;
		while (x < root->game->map_width)
		{
			if (root->game->game_map[y][x] == 1)
				draw_image(root, root->wall_img, x * 40, y * 40);
			else
				draw_image(root, root->ground_img, x * 40, y * 40);
			draw_environment_objects(root, x, y);
			x++;
		}
		y++;
	}
}

void	render_frame(t_game_root *root)
{
	render_game_map(root);
	mlx_put_image_to_window(root->mlx_instance,
		root->mlx_window, root->mlx_img, 0, 0);
}
