/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:08:48 by ncampo            #+#    #+#             */
/*   Updated: 2025/02/08 23:43:51 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello, World!");
	ft_printf("Pointer: %p\n", (void *)0x123456);
	ft_printf("Integer: %d\n", 42);
	ft_printf("Unsigned: %u\n", 123);
	ft_printf("Hexadecimal (lower): %x\n", 255);
	ft_printf("Hexadecimal (upper): %X\n", 255);
	ft_printf("Percent sign: %%\n");
	return (0);
}
