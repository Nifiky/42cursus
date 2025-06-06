/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:54:05 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:54:07 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game_root *root, int x, int y)
{
	if (root->game->game_map[y - 1][x] == 0)
		root->game->player_position.y -= 1;
}

void	move_down(t_game_root *root, int x, int y)
{
	if (root->game->game_map[y + 1][x] == 0)
		root->game->player_position.y += 1;
}

void	move_left(t_game_root *root, int x, int y)
{
	if (root->game->game_map[y][x - 1] == 0)
		root->game->player_position.x -= 1;
}

void	move_right(t_game_root *root, int x, int y)
{
	if (root->game->game_map[y][x + 1] == 0)
		root->game->player_position.x += 1;
}
