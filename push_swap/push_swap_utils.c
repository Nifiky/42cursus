/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:52:37 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:52:40 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_for_all(t_data *data, int error)
{
	if (data)
	{
		if (data->sa)
			free(data->sa);
		if (data->sb)
			free(data->sb);
		free (data);
	}
	if (error)
		write (2, "Error\n", 6);
	exit (error);
}

void	index_value(t_data *data)
{
	int	*sorted;

	sorted = malloc(sizeof(int) * data->sizea);
	if (!sorted)
		free_for_all(data, 1);
	copy_array(sorted, data->sa, data->sizea);
	array_order(sorted, data->sizea);
	replace_index(data, sorted);
	free(sorted);
}

void	copy_array(int *dest, int *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

int	is_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->sizea - 1)
	{
		if (data->sa[i] > data->sa[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	push_chunk(t_data *data, int limit, int size, int *pushed)
{
	if (data->sa[0] < limit)
	{
		pb(data);
		(*pushed)++;
		if (data->sb[0] < limit - (size / 2))
			rb (data);
	}
	else
		ra (data);
}
