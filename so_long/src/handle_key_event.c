/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key_event.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:51:06 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 22:14:01 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_key_press(int keycode, t_game_root *root)
{
	if (keycode == 65307)
		root_destroy(root, 0, 0);
	if (keycode == 119)
		root->game->player_up = 1;
	if (keycode == 115)
		root->game->player_down = 1;
	if (keycode == 97)
		root->game->player_left = 1;
	if (keycode == 100)
		root->game->player_right = 1;
	update(root);
	return (0);
}

int	handle_key_release(int keycode, t_game_root *root)
{
	if (keycode == 119)
		root->game->player_up = 0;
	if (keycode == 115)
		root->game->player_down = 0;
	if (keycode == 97)
		root->game->player_left = 0;
	if (keycode == 100)
		root->game->player_right = 0;
	update(root);
	return (0);
}

int	handle_destroy_hook(int keycode, t_game_root *root)
{
	(void)keycode;
	(void)root;
	root_destroy(0, 0, 0);
	return (0);
}

int	expose_hook(void *param)
{
    render_frame((t_game_root *)param);
    return (0);
}