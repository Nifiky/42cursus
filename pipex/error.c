/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:34:41 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 01:36:29 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_exit(char *error_message, int error_code)
{
	write(2, error_message, ft_strlen(error_message));
	exit(error_code);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

void	cleanup_and_exit(t_pipex *pipex, char *error_message, int error_code)
{
	perror(error_message);
	free_array(pipex->path_name);
	free_array(pipex->cmd1);
	free_array(pipex->cmd2);
	exit(error_code);
}
