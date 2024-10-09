/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:38:25 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:29 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
	char test1 = 'G';
	char test2 = 89;
	char test3 = 130;

	if(ft_isprint(test1))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);

	if(ft_isprint(test2))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);

	if(ft_isprint(test3))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);

	return (0);
}
*/
