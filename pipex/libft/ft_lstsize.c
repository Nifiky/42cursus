/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:33:38 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:25:27 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int main(void)
{
    t_list  *n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

    n1 = malloc(sizeof(t_list));
    n2 = malloc(sizeof(t_list));
	n3 = malloc(sizeof(t_list));
	n4 = malloc(sizeof(t_list));
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	printf("%i\n",ft_lstsize(n1));
} */