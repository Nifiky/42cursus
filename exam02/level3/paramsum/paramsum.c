/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:41:57 by ojamal            #+#    #+#             */
/*   Updated: 2023/03/26 01:46:13 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        mini_putnbr(int n)
{
        char c;

        if (n > 9)
                mini_putnbr(n / 10);
        c = n % 10 + '0';
        write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac > 1)
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
}