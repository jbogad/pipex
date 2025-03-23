/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:44 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/29 10:22:54 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char) c)
			return (&((char *)s)[i]);
		++i;
	}
	return ((void *) 0);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hola Mundo!";
//     char *result;

//     result = ft_memchr(str, 'M', 12);
//     if (result)
//         printf("Encontrado 'M' en la posición: %ld\n", result - str);
//     else
//         printf("'M' no encontrado.\n");

//     result = ft_memchr(str, 'z', 12);
//     if (result)
//         printf("Encontrado 'z' en la posición: %ld\n", result - str);
//     else
//         printf("'z' no encontrado.\n");

//     return 0;
// }