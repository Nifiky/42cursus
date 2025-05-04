/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:23:44 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:27:15 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	destino[] = "pong";
	char	origem[] = "piiing";
	unsigned int	size;


	size = 5;
	printf("origem = %s\ndestino = %s\n", origem, destino);
	ft_strlcpy(destino, origem, size);
	printf("destino: %s\n", destino);
}*/