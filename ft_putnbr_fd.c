/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:09:09 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/12 17:10:15 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	ln;

	ln = nb;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln >= 10)
		ft_putnbr_fd(ln / 10, fd);
	ft_putchar_fd((ln % 10) + '0', fd);
}
/*
#include 
int main (void)
{
	int	n1 = 12345;
	int	n2 = -4333848;
	
	ft_putnbr_fd(n1, 1);
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(n2, 1);
    ft_putchar_fd('\n', 1);

	return (0);
*/