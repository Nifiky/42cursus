/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:53:30 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:25:15 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlist;
	void	*content;

	if (!f || !del || !lst)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
		{
			del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, temp);
		lst = lst->next;
	}
	return (newlist);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
    list->content = ft_strdup("abcd");
	t_list *newlist = ft_lstmap(list, transform_content, ft_delete);
	if (!newlist)
    {
        printf("Failed to create new list\n");
        free(list->content);
        free(list);
        return (1);
    }

    printf("Original content: %s\n", (char *)list->content);
    printf("Transformed content: %s\n", (char *)newlist->content);

    // Libera a memória alocada
    ft_lstclear(&newlist, ft_delete);
	return (0); 
}*/