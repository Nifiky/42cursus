/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:48:42 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:48:57 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	array_order(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	replace_index(t_data *data, int *sorted)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->sizea)
	{
		j = 0;
		while (j < data->sizea)
		{
			if (data->sa[i] == sorted[j])
			{
				data->sa[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

int	find_max(t_data *data)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	index = 0;
	max = data->sb[0];
	while (i < data->sizeb)
	{
		if (data->sb[i] > max)
		{
			max = data->sb[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	push_biggest(t_data *data)
{
	int	index;

	index = find_max(data);
	if (index < data->sizeb / 2)
	{
		while (index > 0)
		{
			rb(data);
			index--;
		}
	}
	else
	{
		while (index < data->sizeb)
		{
			rrb(data);
			index++;
		}
	}
	pa(data);
}

void	chunk_sort(t_data *data)
{
	int	chunks;
	int	chunk_size;
	int	chunk_limit;
	int	pushed;
	int	total;

	chunks = n_chunks(data->sizea);
	chunk_size = data->sizea / chunks;
	chunk_limit = chunk_size;
	pushed = 0;
	total = data->sizea;
	index_value(data);
	while (pushed < total)
	{
		push_chunk(data, chunk_limit, chunk_size, &pushed);
		if (pushed >= chunk_limit)
		{
			chunk_limit += chunk_size;
			if (chunk_limit > total)
				chunk_limit = total;
		}
	}
	while (data->sizeb > 0)
		push_biggest(data);
}
