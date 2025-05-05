/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 22:31:08 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 22:31:37 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}

int	ft_isdigit(int x)
{
	if ((x >= '0' && x <= '9'))
		return (1);
	return (0);
}

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}

static int	counter(int n)
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
