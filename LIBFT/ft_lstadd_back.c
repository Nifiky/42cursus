/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:14:21 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:20:40 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new )
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*n1;
	t_list	*new;
	
	n1 = ft_lstnew("ola eu sou um noh");
	new = ft_lstnew("i am the new node");
	ft_lstadd_back(&n1, new);
	printf("%s\n", (char *) n1->content);
	printf("%s\n", (char *) n1->next->content);
} */