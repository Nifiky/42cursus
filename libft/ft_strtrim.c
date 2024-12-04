/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:42:50 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/12 16:47:21 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	return (ft_substr(s1, i, j - i));
}
/*
int	main(void)
{
	char	s1[] = "              aaaaaaaaaaaaaaaaaaa           ";
	char	set[] = " ";

	printf("funciona? '%s'\n", ft_strtrim(s1, set));
	return (0);
}
*/