/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:36:13 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 01:36:23 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **env)
{
	t_pipex	pipex;

	handle_input(argc, argv);
	pipex = init_pipex(argv, env);
	if (pipe(pipex.fd) == -1)
		cleanup_and_exit(&pipex, "Pipe creation failed", 1);
	pipex.pid = fork();
	if (pipex.pid < 0)
		cleanup_and_exit(&pipex, "Fork failed", 1);
	if (pipex.pid == 0)
	{
		child_process(&pipex, argv[1], env);
	}
	if (pipex.pid > 0)
	{
		parent_process(&pipex, argv[4], env);
	}
}
