/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   root_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:54:31 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:54:42 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	root_continue_destroy(t_game_root *root)
{
	if (root->mlx_instance != 0)
	{
		mlx_destroy_display(root->mlx_instance);
		free(root->mlx_instance);
		root->mlx_instance = 0;
	}
	if (root->game != NULL)
		free_game_resources(root->game);
}

void	root_destroy(t_game_root *root, char *error_msg, int error_num)
{
	if (root != NULL)
	{
		if (root->ground_img != 0)
			mlx_destroy_image(root->mlx_instance, root->ground_img);
		if (root->wall_img != 0)
			mlx_destroy_image(root->mlx_instance, root->wall_img);
		if (root->collectable_image != 0)
			mlx_destroy_image(root->mlx_instance, root->collectable_image);
		if (root->exit_image != 0)
			mlx_destroy_image(root->mlx_instance, root->exit_image);
		if (root->player_img != 0)
			mlx_destroy_image(root->mlx_instance, root->player_img);
		if (root->mlx_img != 0)
			mlx_destroy_image(root->mlx_instance, root->mlx_img);
		if (root->mlx_window != 0)
			mlx_destroy_window(root->mlx_instance, root->mlx_window);
		root_continue_destroy(root);
		free(root);
	}
	exit_with_error(error_msg, error_num);
}

void	exit_with_error(char *error_msg, int error_num)
{
	if (error_msg != 0 || error_num != 0)
		ft_putendl_fd("Error", 2);
	if (error_msg != 0)
		ft_putstr_fd(error_msg, 2);
	if (error_msg != 0 && error_num != 0)
		ft_putstr_fd(": ", 2);
	if (error_num != 0)
		ft_putstr_fd(strerror(error_num), 2);
	if (error_msg != 0 || error_num != 0)
	{
		ft_putendl_fd("", 2);
		exit(1);
	}
	exit(0);
}
