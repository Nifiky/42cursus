/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:31:16 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 17:31:20 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(unsigned long nb)
{
	int		counter;

	if (nb == 0)
		return (ft_putstr("(nil)"));
	counter = ft_putstr("0x");
	counter += ft_putnbr_hex(nb, "0123456789abcdef");
	return (counter);
}

int	select_type(va_list parameters, char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(parameters, int));
	else if (str == 's')
		count += ft_putstr(va_arg(parameters, char *));
	else if (str == 'p')
		count += ft_putptr(va_arg(parameters, unsigned long));
	else if (str == 'd')
		count += ft_putnbr(va_arg(parameters, int));
	else if (str == 'i')
		count += ft_putnbr(va_arg(parameters, int));
	else if (str == 'u')
		count += ft_putnbr_unsigned(va_arg(parameters, unsigned int));
	else if (str == 'x')
		count += ft_putnbr_hex(va_arg(parameters, unsigned int),
				"0123456789abcdef");
	else if (str == 'X')
		count += ft_putnbr_hex(va_arg(parameters, unsigned int),
				"0123456789ABCDEF");
	else if (str == '%')
		count += ft_putchar(str);
	return (count);
}

int	ft_printf(char const *total_str, ...)
{
	va_list	params;
	int		counter;

	counter = 0;
	va_start(params, total_str);
	while (*total_str)
	{
		if (*total_str == '%')
		{
			total_str++;
			counter += select_type(params, *total_str++);
		}
		else
			counter += ft_putchar(*total_str++);
	}
	va_end(params);
	return (counter);
}
