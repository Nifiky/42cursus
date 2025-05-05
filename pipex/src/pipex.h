/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 22:39:00 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 22:45:48 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>

int		open_file(char *file, int in_out);

char	*get_path(char *cmd, char **env);
char	*ft_getenv(char *name, char **env);

void	child(char **av, int *p_fd, char **env);
void	exec(char *cmd, char **env);
void	ft_free_tab(char **tab);
void	parent(char **av, int *p_fd, char **env);

#endif
