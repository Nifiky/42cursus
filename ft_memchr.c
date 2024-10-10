/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 01:08:50 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/10 15:57:34 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sp;
	size_t	i;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)sp[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
/*
int main() {
    const char str[] = "Hello, World!";
    char *result;

    result = ft_memchr(str, 'o', sizeof(str));

    if (result) {
        printf("Found 'o' at position: %ld\n", result - str);
    } else {
        printf("'o' not found.\n");
    }

    return 0;
}
*/