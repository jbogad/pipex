/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:29:05 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/03/23 12:29:05 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "libft/libft.h"

void	error(void);
char	*find_path(char *cmd, char **envp);
int		get_next_line(char **line);
void	execute(char *argv, char **envp);

void	sub_process(char **argv, char **envp, int *fd);
void	prin_proccess(char **argv, char **envp, int *fd);

#endif