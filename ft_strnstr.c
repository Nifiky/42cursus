/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:28:17 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:55:22 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0' || big == little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j] && i
			+ j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	size_t	len;
	char	*result;

	str1 = "Hello World";
	str2 = "lo";
	len = 10;
	result =  ft_strnstr(str1, str2, len);
	if(result != NULL)
	{
		printf("Found %s\n", result);
	}
	else
	{
		printf("not found");
	}
	return(0);
}
*/