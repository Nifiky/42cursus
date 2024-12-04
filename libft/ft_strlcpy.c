/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:50:20 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:29:25 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < dest_size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int main(void)
{
    char src[] = "Hello, World!";
    char dest[6];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Source length: %zu\n", len);

    return 0;
}*/
