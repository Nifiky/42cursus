/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:59:53 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:20:44 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>

int main(void)
{
    t_list *lst;
    t_list  *lst2;
    t_list  *new;
    t_list  *temp;
    int i;

    lst = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));
    lst->content = "abcd";
    lst->next = lst2;
    lst2->content = "efgh";
    lst2->next = NULL;
    new = malloc(sizeof(t_list));
    new->content = "ABCD";
    new->next = NULL;
    temp = lst;
    i = 0;
    while(temp)
    {
        printf("no %i = %s\n", i, (char *) temp->content);
        i++;
        temp = temp->next;
    }
	ft_lstadd_front(&lst, new);
    printf("PASSOU PELA FUNCAO\n\n");
    temp = lst;
    i = 0;
    while(temp)
    {
        printf("no %i = %s\n", i, (char *) temp->content);
        i++;
        temp = temp->next;
    }
}  */