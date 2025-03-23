/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:28 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/29 09:23:34 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function concatenates two strings s1 and s2 and
// returns a new string containing

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	a;
	size_t	b;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	str = malloc(a + b + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < a)
		str[i] = s1[i];
	i = -1;
	while (++i < b)
		str[a + i] = s2[i];
	str[a + b] = '\0';
	return (str);
}
// #include <stdio.h>
// int main() {
//     char *str1 = "Hello, ";
//     char *str2 = "world!";

// 	char *result = ft_strjoin(str1, str2);
//     if (result != NULL)
// 	{
//         printf("Concatenated string: %s\n", result);
//         free(result);
//     }
// 	else
//         printf("Memory allocation failed.\n");
//     return 0;
// }