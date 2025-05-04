/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:54:46 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:24:54 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/* 


int	main(void)
{
	t_list	*lista;
	t_list	*lista2 = NULL;

	lista = malloc(sizeof(t_list));
	lista2 = malloc(sizeof(t_list));
	lista->content = "43";
	lista->next = lista2;
	lista2->content = "44";
	lista2->next = 	NULL;
	ft_lstiter(lista, ft_testiter);
	return (0);
} */