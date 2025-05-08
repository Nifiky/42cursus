/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:49:23 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:49:26 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	numbers_mason(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		result = result * 10 + (str[i++] - '0');
	}
	result *= sign;
	if (result < MIN || result > MAX)
		return (0);
	return (1);
}

int	duplikate(t_data *data, int num, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (data->sa[i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_nums(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->sizea)
	{
		if (!duplikate(data, data->sa[i], i))
			return (-1);
		i++;
	}
	return (0);
}
