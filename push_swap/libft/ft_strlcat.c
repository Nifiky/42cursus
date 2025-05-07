/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:49 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/07 19:39:57 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		return (src_len + size);
	else
	{
		while (src[j] && (dest_len + j) < size)
			dest[i++] = src[j++];
		if ((dest_len + j) == size && dest_len < size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_len + dest_len);
	}
}
