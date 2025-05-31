/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:05:32 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/31 00:05:32 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0) 
		return ((char *) big);
	while (*big != '\0' && n-- >= little_len) 
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0) 
			return ((char *)big);
		big++;
	}
	return (NULL); 
}
