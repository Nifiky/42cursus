/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:59:35 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:20:21 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 65 || (c > 90 && c < 97) || c > 122))
		return (0);
	return (1024);
}
/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%i\n", ft_isalpha('k'));
    printf("%i\n", isalpha('k'));
}*/