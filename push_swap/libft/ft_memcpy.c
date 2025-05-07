/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:30:14 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/07 19:30:28 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_val;
	unsigned char		*src_val;
	size_t				i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	dest_val = (unsigned char *)dest;
	src_val = (unsigned char *)src;
	while (i < n)
	{
		dest_val[i] = src_val[i];
		i++;
	}
	return (dest);
}
