/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:14:25 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:29:54 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + ('a' - 'A'));
	}
	return (ch);
}
/*
int main(void)
{
	char test1 = 'A';
	printf("before %c\n", test1);

	char lowercase1 = ft_tolower(test1);
	printf("after %c", lowercase1);

	return (0);
}
*/
