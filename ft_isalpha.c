/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:06:39 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:12 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	test1;
	char	test2;

	test1 = 'A';
	test2 = '3';
	if (ft_isalpha (test1))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	if (ft_isalpha (test2))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	return (0);
}
*/
