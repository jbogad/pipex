/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:39 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/29 10:23:32 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "Hola Mundo";
//     char dest[20];
//     ft_memcpy(dest, src, 5);
//     printf("Destino: %s\n", dest);

//     return 0;
// }
