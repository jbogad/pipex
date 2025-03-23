/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:25 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 10:15:28 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The `ft_strlcpy` function copies `src` to `dst` and returns `src`.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	else
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}

// #include <stdio.h>

// int main()
// {
//     const char *src = "Hola Mundo!";
//     char dst[20];

//     size_t result = ft_strlcpy(dst, src, sizeof(dst));

//     printf("Cadena copiada: %s\n", dst);
//     printf("Longitud de la cadena copiada: %zu\n", result);

//     return 0;
// }