/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:29:32 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/07 19:29:52 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	const unsigned char	*str1_val;
	const unsigned char	*str2_val;
	size_t				i;

	str1_val = (const unsigned char *)str1;
	str2_val = (const unsigned char *)str2;
	i = 0;
	while (i < len)
	{
		if (str1_val[i] != str2_val[i])
		{
			return (str1_val[i] - str2_val[i]);
		}
		i++;
	}
	return (0);
}
