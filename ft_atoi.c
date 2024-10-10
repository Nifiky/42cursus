/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 02:02:21 by ncampo            #+#    #+#             */
/*   Updated: 2024/10/10 15:51:07 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	const char	*s1 = "    ---+--+123ab567";
	const char	*s2 = "Mira aqui hay un 2";
	const char	*s3 = "-456";
	const char	*s4 = "1234";

	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));
	printf("%d\n", ft_atoi(s3));
	printf("%d\n", ft_atoi(s4));
	return (0);

}
*/