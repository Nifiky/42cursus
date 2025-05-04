/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:21:16 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:20:27 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (2048);
}
/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%i\n", ft_isdigit(49));
    printf("%i\n", isdigit(49));
}*/