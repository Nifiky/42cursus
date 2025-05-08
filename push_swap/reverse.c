/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:53:00 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:53:02 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data)
{
	int	i;

	i = data->sizea - 1;
	while (i > 0)
	{
		swap_int(&data->sa[i], &data->sa[i - 1]);
		i--;
	}
	ft_printf("rra\n");
}

void	rrb(t_data *data)
{
	int	i;

	i = data->sizeb - 1;
	while (i > 0)
	{
		swap_int(&data->sb[i], &data->sb[i - 1]);
		i--;
	}
	ft_printf("rrb\n");
}

void	rrr(t_data *data)
{
	int	i;

	i = data->sizea - 1;
	while (i > 0)
	{
		swap_int(&data->sa[i], &data->sa[i - 1]);
		i--;
	}
	i = data->sizeb - 1;
	while (i > 0)
	{
		swap_int(&data->sb[i], &data->sb[i - 1]);
		i--;
	}
	ft_printf("rrr\n");
}
