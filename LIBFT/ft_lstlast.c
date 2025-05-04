/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:17:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:25:00 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*n1;
	
	n1 = ft_lstnew("ola eu sou um noh");
	n1->next = ft_lstnew("oi\n");
	n1->next->next = ft_lstnew("ultimo noh\n");
	printf("o content do utlimo noh da lista eh: %s\n", 
	(char *)ft_lstlast(n1)->content);
} */