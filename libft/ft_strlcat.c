/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:01:23 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/10 02:30:17 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
	{
		dst_len++;
	}
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main(void)
{
    char    dst[20] = "Hello, ";   // Destination string (with extra space)
    const char  *src = "world!";   // Source string to append
    size_t  total_len;

    // Call ft_strlcat to concatenate src into dst
    total_len = ft_strlcat(dst, src, sizeof(dst));

    // Print the result and the total length
    printf("After concatenation: %s\n", dst);
    printf("Total length: %zu\n", total_len);

    return 0;
}
*/