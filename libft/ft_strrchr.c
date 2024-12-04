/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:43:59 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 15:46:02 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*lo;
	unsigned char	uc;

	uc = (unsigned char)c;
	lo = NULL;
	while (*s != '\0')
	{
		if (*s == uc)
		{
			lo = s;
		}
		s++;
	}
	if (uc == '\0')
	{
		return ((char *)s);
	}
	return ((char *)lo);
}
/*
int main (void)
{
	char	*str;
	char	target;
	char	*result;

	str = "Hello World";
	target = 'l';
	result = ft_strrchr(str, target);
	if(result != NULL)
	{
		printf("Character %c is found at %ld\n", target, result - str);
	}
	else{
		printf("%c is not found", target);
	}
	return (0);
}
*/
