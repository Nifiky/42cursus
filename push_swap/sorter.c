/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:54:23 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:54:46 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_sort(t_data *data)
{
	if (data->sizea <= 1)
		return ;
	else if (data->sizea == 2)
		sort_two(data);
	else if (data->sizea == 3)
		sort_three(data);
	else if (data->sizea <= 5)
		sort_five(data);
	else
		chunk_sort(data);
}

void	sort_two(t_data *data)
{
	if (data->sa[0] > data->sa[1])
		sa(data->sa);
}

void	sort_three(t_data *data)
{
	int	a;
	int	b;
	int	c;

	a = data->sa[0];
	b = data->sa[1];
	c = data->sa[2];
	if (a > b && b < c && a < c)
		sa(data->sa);
	else if (a > b && b > c)
	{
		sa(data->sa);
		rra(data);
	}
	else if (a > b && b < c && a > c)
		ra(data);
	else if (a < b && b > c && a < c)
	{
		sa(data->sa);
		ra(data);
	}
	else if (a < b && b > c && a > c)
		rra(data);
}

int	n_chunks(int size)
{
	if (size <= 100)
		return (5);
	return (11);
}
