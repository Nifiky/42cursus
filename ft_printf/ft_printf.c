/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:07:49 by ncampo            #+#    #+#             */
/*   Updated: 2025/02/08 23:58:01 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(const char **format, va_list args)
{
	(*format)++;
	if (**format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (**format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (**format == 'd' || **format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (**format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (**format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (**format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (**format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (**format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += handle_specifier(&format, args);
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
