/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:25:48 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 00:22:06 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief apaga os dados ate n bytes de memoria, comecando na localizacao
apontada por s, escrevendo zeros(bytes contendo '\0') baquela area de memoria.
 @param s pointer para a  area de memoria a ser alterada
 @param n limitador.
@return none.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "ana banana";

	printf("antes: %s\n", str);
	ft_bzero(str, 1);
	printf("depois: %s\n", str);
}*/