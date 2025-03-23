/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:44:14 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 12:02:03 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The `ft_strlcat` function concatenates `src` to `dest`
// without exceeding `destsize` and returns the total length.

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	destlength;
	size_t	srclength;

	destlength = ft_strlen(dest);
	srclength = ft_strlen(src);
	j = destlength;
	if (destsize > 0 && destlength < destsize - 1)
	{
		i = 0;
		while (src[i] && destlength + i < destsize - 1)
		{
			dest[j++] = src[i++];
		}
		dest[j] = '\0';
	}
	if (destlength >= destsize)
		destlength = destsize;
	return (destlength + srclength);
}

// #include <stdio.h>

// int main()
// {
// 	char dest1[20] = "hola, ";
// 	const char *src = "Mundo!";
// 	size_t result;

// 	result = ft_strlcat(dest1, src, sizeof(dest1));
// 	printf("restultado 1: %s\n", dest1);
// 	printf("Longitud esperada: %zu\n\n", result);
// 	return (0);
// }