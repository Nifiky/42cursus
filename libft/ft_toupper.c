/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:24:59 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:29:59 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (ch - ('a' - 'A'));
	}
	return (ch);
}
/*
int main(void)
{
	char test1 = 'b';
	printf("before: %c\n", test1);

	char uppercase1 = ft_toupper(test1);
	printf("after: %c\n", uppercase1);

	char test2 = 'L';
	printf("before: %c\n", test2);

	char uppercase2 = ft_toupper(test2);
	printf("after: %c\n", uppercase2);  


	char test3 = '8';
	printf("before: %c\n", test3);

	char uppercase3 = ft_toupper(test3);
	printf("after: %c", uppercase3);

	return (0);
}
*/
