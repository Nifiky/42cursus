/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 05:00:12 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/07 05:15:26 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int f_prime(int n)
{
    int i = 3;
    if(n <= 1)
        return 0;
    if (n % 2 == 0 && n > 2)
        return 0;
    while (i < (n / 2))
    {
        if (n % i == 0)
            return 0;
        i += 2;
    }
    return 1;
}

void mini_putnbr(int n)
{
    char c;
    if(n > 9)
        mini_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 1)
        mini_putnbr(0);
    if (ac == 2)
    {
        int i = 0;
        int a = mini_atoi(av[1]);
        while(a > 0)
        {
            if(f_prime(a))
                i += a;
            a--;
        }
        mini_putnbr(i);
    }
    write(1, "\n", 1);
}