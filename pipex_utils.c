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

char	*find_path(char *cmd, char **envp)
{
	char	**paths;
	char	*path;
	int		i;
	char	*part_path;

	i = 0;
	while (ft_strnstr(envp[i], "PATH=", 5) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, cmd);
		free(part_path);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	i = -1;
	while (paths[++i])
		free(paths[i]);
	free(paths);
	return (0);
}

void	error(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

void	execute(char *argv, char **envp)
{
	char	**cmd;
	int		i;
	char	*path;

	i = -1;
	cmd = ft_split(argv, ' ');
	path = find_path(cmd[0], envp);
	if (!path)
	{
		while (cmd[++i])
			free(cmd[i]);
		free(cmd);
		error();
	}
	if (execve(path, cmd, envp) == -1)
		error();
}

int	get_next_line(char **line)
{
	char	*buffer;
	int		index;
	int		bytes_read;
	char	current_char;

	index = 0;
	bytes_read = 0;
	buffer = (char *)malloc(10000 * sizeof(char));
	if (!buffer)
		return (-1);
	bytes_read = read(0, &current_char, 1);
	while (bytes_read > 0 && current_char != '\n' && current_char != '\0')
	{
		if (current_char != '\n' && current_char != '\0')
			buffer[index] = current_char;
		index++;
		bytes_read = read(0, &current_char, 1);
	}
	buffer[index] = '\n';
	buffer[index + 1] = '\0';
	*line = buffer;
	free(buffer);
	return (bytes_read);
}
