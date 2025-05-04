/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:37:52 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 01:39:55 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>

# define EXIT_COMMAND 127
# define SINGLE_QUOTE 39

typedef struct s_pipex
{
	int		pid;
	char	**cmd1;
	char	**cmd2;
	char	**path_name;
	int		fd[2];
}				t_pipex;

/**********************UTILS********************/

t_pipex	init_pipex(char **argv, char **envp);
void	handle_input(int argc, char **argv);
char	**get_path_name(char **env);
char	**ft_split_trim(char *str, char c);

/**********************ERROR********************/

void	error_exit(char *error_message, int error_exit);
void	free_array(char **array);
void	cleanup_and_exit(t_pipex *pipex, char *error_message, int error_code);

/***********************PIPEX********************/

void	child_process(t_pipex *pipex, char *infile, char **env);
void	parent_process(t_pipex *pipex, char *outfile, char **env);
void	exec(t_pipex *pipex, char **env, char c);
void	exec_cmd_path(t_pipex *ppx, int i, char **cmd, char **envp);

#endif