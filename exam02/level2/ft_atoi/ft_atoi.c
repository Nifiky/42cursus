/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:22:40 by ojamal            #+#    #+#             */
/*   Updated: 2025/06/16 15:43:26 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int mini_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	return result - sign;
}
