/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:19:05 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/21 13:07:28 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_bzero function sets the first n bytes

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char ) 0;
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char str[10] = "Hi Madrid";
// 	printf("before ft_bzero: '%s'\n", str);
// 	ft_bzero(str, 2);
// 	printf("after ft_bzero: '%s'\n", str);
// 	return 0;
// }