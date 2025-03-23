/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:33 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 16:03:25 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fills the first `n` bytes of memory with the value c

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = b;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int main()
// {
// 	char str[10] = "Hi Madrid";

// 	printf("first: %s'\n", str);
// 	ft_memset(str, 'X', 5);
// 	printf("before: %s\n", str);

// 	return 0;
// }