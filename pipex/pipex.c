/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:36:57 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 01:37:29 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process(t_pipex *pipex, char *infile, char **env)
{
	int	fd;

	fd = open(infile, O_RDONLY);
	if (fd < 0)
		cleanup_and_exit(pipex, infile, EXIT_FAILURE);
	close(pipex->fd[0]);
	dup2(fd, 0);
	dup2(pipex->fd[1], 1);
	close(pipex->fd[1]);
	exec(pipex, env, 'c');
}

void	parent_process(t_pipex *pipex, char *outfile, char **env)
{
	int	fd;

	fd = open(outfile, O_WRONLY | O_TRUNC | O_CREAT, 0666);
	if (fd < 0)
		cleanup_and_exit(pipex, outfile, EXIT_FAILURE);
	close(pipex->fd[1]);
	dup2(fd, 1);
	dup2(pipex->fd[0], 0);
	close(pipex->fd[0]);
	exec(pipex, env, 'p');
}

void	exec_cmd_path(t_pipex *pipex, int i, char **cmd, char **env)
{
	char	*original_path;
	char	*joined_path;

	original_path = ft_strdup(pipex->path_name[i]);
	joined_path = ft_strjoin(original_path, cmd[0]);
	if (!joined_path)
	{
		perror("ft_strjoin failed");
		exit(EXIT_FAILURE);
	}
	execve(joined_path, cmd, env);
	free(joined_path);
}

void	exec(t_pipex *pipex, char **env, char exec_type)
{
	int	i;

	i = 0;
	if (exec_type == 'c')
	{
		while (pipex->path_name[i])
		{
			exec_cmd_path(pipex, i, pipex->cmd1, env);
			i++;
		}
		cleanup_and_exit(pipex, pipex->cmd1[0], EXIT_COMMAND);
	}
	if (exec_type == 'p')
	{
		while (pipex->path_name[i])
		{
			exec_cmd_path(pipex, i, pipex->cmd2, env);
			i++;
		}
		cleanup_and_exit(pipex, pipex->cmd2[0], EXIT_COMMAND);
	}
}
