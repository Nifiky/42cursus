/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:54:07 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:23:16 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ft_calloc: %p\n", ft_calloc(0, 0));
	printf("calloc: %p\n", calloc(0, 0)); 

	char *str;

	str = calloc(sizeof(char), 7);
	str[0] = 'm';
	str[1] = 'a';
	str[2] = 'r';
	str[3] = 'c';
	str[4] = 'e';
	str[5] = 'l';
	str[6] = 'o';
	printf("%s\n", str);
}*/