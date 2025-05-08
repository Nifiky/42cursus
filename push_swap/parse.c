/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:50:20 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:50:25 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_split(t_data *data, char **split)
{
	int	j;
	int	num;

	j = 0;
	while (split[j])
	{
		if (numbers_mason(split[j]) == 0)
		{
			free_split(split);
			free_for_all(data, 1);
		}
		num = ft_atoi(split[j]);
		data->sa[data->sizea++] = num;
		j++;
	}
}

void	parse_args(t_data *data, int argc, char *argv[])
{
	int		i;
	char	**split;

	data->sizea = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			free_for_all(data, 1);
		parse_split(data, split);
		free_split(split);
		i++;
	}
	if (check_nums(data) != 0)
		free_for_all(data, 1);
	data->sizeb = 0;
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	count_numbers(int argc, char *argv[])
{
	int		count;
	int		i;
	int		j;
	char	**split;

	count = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
		{
			free_split(split);
			return (-1);
		}
		j = 0;
		while (split[j])
		{
			count++;
			j++;
		}
		free_split(split);
		i++;
	}
	return (count);
}
