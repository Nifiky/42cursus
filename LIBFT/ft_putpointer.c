/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:34:51 by anavolkmann       #+#    #+#             */
/*   Updated: 2025/05/05 01:21:42 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putpointer(unsigned long nbr)
{
	int	result;

	result = 0;
	if (!nbr)
		return (write(1, "(nil)", 5));
	else
	{
		result += ft_putstr("0x");
		result += ft_putpointerhexa(nbr, 'x');
	}
	return (result);
}
