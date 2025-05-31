/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 23:45:24 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/30 23:45:27 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_handle_char(va_list ap);
int		ft_handle_string(va_list ap);
int		ft_handle_int(va_list ap);
int		ft_handle_unsigned(va_list ap);
int		ft_handle_pointer(va_list ap);
int		ft_handle_hexlower(va_list ap);
int		ft_handle_hexupper(va_list ap);
int		ft_handle_percent(void);
int		ft_putchar(char c); 
int		ft_putnbr_base(unsigned long long nb, const char *base);

#endif
