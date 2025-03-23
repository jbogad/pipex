/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:39 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 16:03:54 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// writes the string s to the specified file descriptor fd

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
