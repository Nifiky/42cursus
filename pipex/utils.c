/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:38:21 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/05 01:42:48 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_pipex	init_pipex(char **argv, char **env)
{
	t_pipex	pipex;

	pipex.pid = 0;
	pipex.fd[0] = 0;
	pipex.fd[1] = 0;
	pipex.path_name = get_path_name(env);
	if (!pipex.path_name)
		error_exit("Error: Program cannot run without PATH.\n", EXIT_FAILURE);
	if (ft_strchr(argv[2], SINGLE_QUOTE) != NULL)
		pipex.cmd1 = ft_split_trim(argv[2], SINGLE_QUOTE);
	else
		pipex.cmd1 = ft_split(argv[2], ' ');
	if (ft_strchr(argv[3], SINGLE_QUOTE) != NULL)
		pipex.cmd2 = ft_split_trim(argv[3], SINGLE_QUOTE);
	else
		pipex.cmd2 = ft_split(argv[3], ' ');
	return (pipex);
}

void	handle_input(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 5)
		error_exit ("Error\nCorrect usage: %s file1 cmd1 cmd2 file2\n",
			EXIT_FAILURE);
	i = -1;
	while (argv[++i])
	{
		if (argv[i][0] == 0 || argv[i][0] == 39)
			error_exit("Error\nInvalid arguments\n", EXIT_FAILURE);
		j = 0;
		while (!ft_isspace(argv[i][j]))
		{
			if (!argv[i][++j])
				error_exit("Error\nEmpty string\n", EXIT_FAILURE);
		}
	}
}

char	**get_path_name(char **env)
{
	char	**path;
	char	*temp;
	int		i;

	i = 0;
	while (env[i] && ft_strnstr(env[i], "PATH", 4) == 0)
		i++;
	if (!env[i])
		return (NULL);
	temp = ft_strtrim(env[i], "PATH=");
	path = ft_split(temp, ':');
	i = -1;
	while (path[++i])
		path[i] = ft_strjoin(path[i], "/");
	free(temp);
	return (path);
}

char	**ft_split_trim(char *str, char c)
{
	char	*first_trim;
	char	**split;
	char	**trim;
	int		i;

	first_trim = ft_strtrim(str, " ");
	split = ft_split(first_trim, c);
	free(first_trim);
	trim = ft_calloc(sizeof(char *), 3);
	i = -1;
	while (split[++i])
	{
		trim[i] = ft_strtrim(split[i], " ");
	}
	free_array(split);
	return (trim);
}
