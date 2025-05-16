/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 22:37:57 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/16 12:47:29 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	parent(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(av[4], 1);
	if (fd == -1)
	{
		perror("Parent : Error open outfile");
		exit(1);
	}
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[0]);
	close(p_fd[1]);
	close(fd);
	exec(av[3], env);
}

void	child(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(av[1], 0);
	if (fd == -1)
	{
		perror("Child : Error open infile");
		exit(1);
	}
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	close(p_fd[1]);
	close(fd);
	exec(av[2], env);
}

void	exec(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	if (!s_cmd || !s_cmd[0])
	{
		ft_putstr_fd("pipex: command not found \n", 2);
		ft_free_tab(s_cmd);
		exit(127);
	}
	path = get_path(s_cmd[0], env);
	if (!path)
	{
		ft_putstr_fd("pipex: command not found : ", 2);
		ft_putstr_fd(s_cmd[0], 2);
        ft_putstr_fd("\n", 2);
		ft_free_tab(s_cmd);
		exit (127);
	}
	if (execve(path, s_cmd, env) == -1)
	{
		perror("pipex : Execve failed \n");
		ft_free_tab(s_cmd);
		free(path);
		exit(127);
	}
}

int	main(int ac, char **av, char **env)
{
	int		p_fd[2];
	pid_t	pid;

	if (ac != 5)
	{
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
		return (1);
	}
	if (pipe(p_fd) == -1)
		exit(-1);
	pid = fork();
	if (pid == -1)
		exit(-1);
	if (!pid)
		child (av, p_fd, env);
	else
	{
		wait(NULL);
		parent(av, p_fd, env);
	}
	return (0);
}
