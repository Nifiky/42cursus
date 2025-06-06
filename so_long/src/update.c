/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:56:16 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:56:17 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	print_move_terminal(t_game_root *root, int x, int y)
{
	if (root->game->player_position.x != x
		|| root->game->player_position.y != y)
	{
		root->game->player_move++;
		ft_putnbr_fd(root->game->player_move, 1);
		ft_putendl_fd("", 1);
	}
}

static void	can_collectable(t_game_root *root)
{
	int				k;

	k = 0;
	while (k < root->game->total_collectables)
	{
		if (root->game->collectables[k].x == root->game->player_position.x
			&& root->game->collectables[k].y == root->game->player_position.y)
		{
			root->game->collectables[k].x = -1;
			root->game->collectables[k].y = -1;
			root->game->player_collectable_count++;
		}
		k++;
	}
}

void	update(t_game_root *root)
{
	int				x;
	int				y;

	x = root->game->player_position.x;
	y = root->game->player_position.y;
	if (root->game->player_up != 0)
		move_up(root, x, y);
	else if (root->game->player_down != 0)
		move_down(root, x, y);
	else if (root->game->player_left != 0)
		move_left(root, x, y);
	else if (root->game->player_right != 0)
		move_right(root, x, y);
	print_move_terminal(root, x, y);
	can_collectable(root);
	render_frame(root);
	if (root->game->exit_position.x == root->game->player_position.x
		&& root->game->exit_position.y == root->game->player_position.y)
		if (root->game->total_collectables
			== root->game->player_collectable_count)
			root_destroy(root, 0, 0);
}
