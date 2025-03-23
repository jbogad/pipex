/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:30 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/29 10:22:20 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	const char *str = "Hola Mundo";

// 	char *result = ft_strchr(str, 'u');
// 	if (result)
// 		printf("Encontrado: %s\n", result);
// 	else
// 		printf("No encontrado.\n");

// 	result = ft_strchr(str, 'z');
// 	return 0;
// }