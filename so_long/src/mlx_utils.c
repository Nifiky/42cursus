/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:53:23 by ncampo            #+#    #+#             */
/*   Updated: 2025/06/06 18:53:33 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

unsigned int	mlx_get_pixel(t_img *img, int pixel_x, int pixel_y)
{
	return (*(unsigned int *)
		(img->data + (pixel_x * img->bpp / 8 + pixel_y * img->size_line)));
}

void	mlx_draw_pixel(t_img *img, int pixel_x, int pixel_y, int pixel_color)
{
	char	*target;

	target = img->data + (pixel_x * img->bpp / 8 + pixel_y * img->size_line);
	*(unsigned int *)target = pixel_color;
}

unsigned int	mlx_rgb_to_int(int opacity, int red, int green, int blue)
{
	return (opacity << 24 | red << 16 | green << 8 | blue);
}
