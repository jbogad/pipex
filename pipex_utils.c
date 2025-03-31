/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:29:21 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/03/23 12:29:21 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*try_path(char **paths, char *cmd)
{
	int		i;
	char	*part_path;
	char	*full_path;

	i = 0;
	while (paths[i])
	{
		part_path = ft_strjoin(paths[i], "/");
		full_path = ft_strjoin(part_path, cmd);
		free(part_path);
		if (access(full_path, F_OK) == 0)
			return (full_path);
		free(full_path);
		i++;
	}
	return (NULL);
}

char	*find_path(char *cmd, char **envp)
{
	int		i;
	char	**paths;
	char	*path;

	if (!envp || !envp[0])
		return (NULL);
	i = 0;
	while (envp[i] && ft_strnstr(envp[i], "PATH=", 5) == 0)
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	path = try_path(paths, cmd);
	i = -1;
	while (paths[++i])
		free(paths[i]);
	free(paths);
	return (path);
}

static void	cmd_error(char **cmd)
{
	int	i;

	ft_putstr_fd("pipex: command not found: ", 2);
	ft_putstr_fd(cmd[0], 2);
	ft_putstr_fd("\n", 2);
	i = -1;
	while (cmd[++i])
		free(cmd[i]);
	free(cmd);
	exit(127);
}

void	execute(char *argv, char **envp)
{
	char	**cmd;
	char	*path;

	cmd = ft_split(argv, ' ');
	path = find_path(cmd[0], envp);
	if (!path)
		cmd_error(cmd);
	if (execve(path, cmd, envp) == -1)
		error();
}
