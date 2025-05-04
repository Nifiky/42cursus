/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:32:41 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:28:07 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*final;

	final = NULL;
	if (s1 && set)
	{
		first = 0;
		last = ft_strlen(s1);
		while (s1[first] && first < last && ft_strchr(set, s1[first]) != NULL)
			first++;
		while (s1[last -1] && first < last && \
ft_strchr(set, s1[last -1]) != NULL)
			last--;
		final = ft_substr(s1, first, last - first);
	}
	return (final);
}
/*#include <stdio.h>

int	main(void)
{
	const char	s1[] = "abcdef";
	const char	set[] = "a";
	printf("%s\n", ft_strtrim(s1, set));
}*/