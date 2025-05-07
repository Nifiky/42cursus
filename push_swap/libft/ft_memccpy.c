/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:28:01 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/07 19:28:04 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t				i;
	char				*dest_val;
	char				*src_val;
	unsigned char		letter;

	dest_val = (char *)dest;
	src_val = (char *)src;
	letter = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		dest_val[i] = src_val[i];
		if (src_val[i] == letter)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
