/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:30 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:20 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main (void)
{
	char test1 = 'K';
	char test2 = 6;
	char test3 = 130;

	if(ft_isascii (test1))
		write(1, "true\n", 5);
	else 
		write(1, "false\n", 6);

	if(ft_isascii (test2))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);

	if(ft_isascii(test3))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);

	return (0);
}
*/
