/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:50:38 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:50:45 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data)
{
	int	i;

	i = data->sizea;
	data->sizeb --;
	data->sizea ++;
	while (i > 0)
	{
		swap_int(&data->sa[i], &data->sa[i - 1]);
		i--;
	}
	data->sa[0] = data->sb[0];
	i = 0;
	while (i < data->sizeb)
	{
		data->sb[i] = data->sb[i + 1];
		i++;
	}
	ft_printf("pa\n");
}

void	pb(t_data *data)
{
	int	i;

	i = data->sizeb;
	data->sizeb ++;
	data->sizea --;
	while (i > 0)
	{
		swap_int(&data->sb[i], &data->sb[i - 1]);
		i--;
	}
	data->sb[0] = data->sa[0];
	i = 0;
	while (i < data->sizea)
	{
		data->sa[i] = data->sa[i + 1];
		i++;
	}
	ft_printf("pb\n");
}
