/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:51 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 15:15:20 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  writes a string to a file descriptor

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// #include <stdio.h>
// #include <fcntl.h>

// int	main(void)
// {
// 	int file_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (file_fd == -1) {
// 		perror("Error opening file");
// 		return (1);
// 	}

// 	ft_putendl_fd("Hello, World!", file_fd);

// 	close(file_fd);

// 	ft_putendl_fd("This is printed to the screen.", 1);

// 	return 0;
// }