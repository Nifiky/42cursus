/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:17:15 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:29:33 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str [len] != '\0')
		len++;
	return (len);
}
/*
int main (void)
{
	char *test;
	test = "Hello World";

	size_t len;
	len = ft_strlen(test);

	printf("The length of %s is %zu", test, len);

	return (0);
}
*/
