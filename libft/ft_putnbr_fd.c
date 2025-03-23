/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:26:10 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/29 09:23:15 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts an integer number into characters and sends
// it to the output file (fd).

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		write(fd, &"0123456789"[n % 10], 1);
	}
}

// #include <fcntl.h>
// int main()
// {
//     ft_putnbr_fd(12345, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-67890, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     return (0);
// }
