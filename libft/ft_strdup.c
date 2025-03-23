/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:28 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 16:45:19 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function duplicates the string s1 and returns
//a pointer to the newly allocated string

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*p;
	size_t	i;

	p = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(p) + 1);
	if (!d)
		return (NULL);
	while (p[i] != '\0')
	{
		d[i] = p[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	const char *original = "Hello World";
// 	char *duplicate = ft_strdup(original);

// 	if (duplicate)
// 	{
// 		printf("original: %s\n", original);
// 		printf("duplicada: %s\n", duplicate);
// 		free(duplicate); 
// 	}
// 	else
// 	{
// 		printf("Error\n");
// 	}

// 	return 0;
// }