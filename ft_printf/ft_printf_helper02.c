/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper02.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:31:11 by ncampo            #+#    #+#             */
/*   Updated: 2025/02/08 23:57:04 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	char	*hex_digits;

	count = 0;
	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
	{
		hex_digits = "0123456789abcdef";
	}
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	count = 0;
	if (address == 0)
	{
		return (ft_putstr("(nil)"));
	}
	count += ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}
