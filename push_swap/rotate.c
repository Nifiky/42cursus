/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:53:24 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:53:26 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	int	i;

	i = 0;
	while (i + 1 < data->sizea)
	{
		swap_int(&data->sa[i], &data->sa[i + 1]);
		i++;
	}
	ft_printf("ra\n");
}

void	rb(t_data *data)
{
	int	i;

	i = 0;
	while (i + 1 < data->sizeb)
	{
		swap_int(&data->sb[i], &data->sb[i + 1]);
		i++;
	}
	ft_printf("rb\n");
}

void	rr(t_data *data)
{
	int	i;

	i = 0;
	while (i + 1 < data->sizea)
	{
		swap_int(&data->sa[i], &data->sa[i + 1]);
		i++;
	}
	i = 0;
	while (i + 1 < data->sizeb)
	{
		swap_int(&data->sb[i], &data->sb[i + 1]);
		i++;
	}
	ft_printf("rr\n");
}
