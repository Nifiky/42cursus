/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:15:57 by anavolkmann       #+#    #+#             */
/*   Updated: 2025/05/05 01:21:38 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nbr, int u)
{
	int			result;
	long int	i;

	if (!u)
		i = nbr;
	else
		i = (unsigned int) nbr;
	result = 0;
	if (i < 0)
	{
		result += ft_putchar('-');
		i *= -1;
	}
	if (i < 10)
		result += ft_putchar((i % 10) + 48);
	else
	{
		result += ft_putnbr((i / 10), 0);
		result += ft_putnbr((i % 10), 0);
	}
	return (result);
}
