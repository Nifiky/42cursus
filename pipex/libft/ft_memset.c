/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:19:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:26:03 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = (char) c;
		i++;
	}
	return (str);
}
/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "ana";
	char b[] = "ana";

	printf("ft_memset: %s\n", (char *)ft_memset(a, 's', 4));
	printf("memset: %s\n", (char *)memset(b, 's', 4));
} */