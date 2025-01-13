/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 00:28:25 by ncampo            #+#    #+#             */
/*   Updated: 2025/01/11 00:28:42 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}	t_list;

char	*get_line(t_list *list);
char	*get_next_line(int fd);

int		len_newline(t_list *list);
int		newline(t_list *list);

t_list	*ft_lstlast(t_list *list);

void	clean_list(t_list **list, t_list *clean_node, char *buf);
void	create_list(t_list **list, int fd);
void	create_node(t_list **list, char *buf);
void	copy_str(t_list *list, char *str);
void	next_list(t_list **list);

#endif