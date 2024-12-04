/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:54:50 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/09 16:28:24 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    char test1;
    char test2;

    test1 = 'k';
    test2 = '7';

    if (ft_isdigit (test1))
        write(1, "true\n", 5);
    else
        write(1, "false\n", 6);

    if (ft_isdigit(test2))
        write(1, "true\n",5);
    else 
        write(1, "false\n", 6);

    return (0);
}
*/
