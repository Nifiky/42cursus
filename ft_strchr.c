/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:55:33 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:27:41 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == uc)
		{
			return ((char *)s);
		}
		s++;
	}
	if (uc == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int main (void)
{
	char	*str;
	char	target;
	char	*result;

	str = "Hello World";
	target = 'l';
	result = ft_strchr(str, target);
	if(result != NULL)
	{
		printf("Character %c is found at %ld\n", target, result - str);
	}
	else
	{
		printf("%c is not found\n", target);
	}
	return (0);
}
*/