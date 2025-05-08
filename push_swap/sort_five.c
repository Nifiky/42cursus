/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:53:55 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:55:23 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_data *data)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	min = data->sa[0];
	index = 0;
	while (i < data->sizea)
	{
		if (data->sa[i] < min)
		{
			min = data->sa[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	push_min(t_data *data)
{
	int	index;

	index = find_min(data);
	if (index <= data->sizea / 2)
	{
		while (index -- > 0)
			ra(data);
	}
	else
	{
		while (index ++ < data->sizea)
			rra(data);
	}
	pb(data);
}

void	sort_five(t_data *data)
{
	while (data->sizea > 3)
		push_min(data);
	sort_three(data);
	while (data->sizeb > 0)
		pa(data);
}
