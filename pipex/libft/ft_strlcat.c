/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:04:27 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:27:09 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			d;
	size_t			s;
	unsigned int	i;
	unsigned int	j;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = d;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size <= d)
	{
		return (size + s);
	}
	return (d + s);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	src[50] = "world";
	char	dest[50] = "hello ";
	unsigned int	i;

	i = 10;
	printf("ft_strlcat = %zu\n", ft_strlcat(dest, src, i));
	printf("%s\n", dest);
	return (0);
}*/