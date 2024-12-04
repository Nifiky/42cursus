/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:56:51 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:09 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int main (void)
{
	char test1 = 'K';
	char test2 = '9';
	char test3 = '$';

	printf("%c is %d\n", test1, ft_isalnum(test1));
	printf("%c is %d\n", test2, ft_isalnum(test2)); 
	printf("%c is %d\n", test3, ft_isalnum(test3));

	return (0);
}
*/
