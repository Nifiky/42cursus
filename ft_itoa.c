/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:51:16 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/12 16:53:23 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		num;
	int		size;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	size = counter(num);
	res = ft_calloc(size + 1, sizeof(char));
	if (!res)
		return (NULL);
	res[size] = '\0';
	if (n < 0)
		num = -num;
	while (size > 0)
	{
		res[size - 1] = (num % 10) + '0';
		num /= 10;
		size --;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
/*
int main()*/