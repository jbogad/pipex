/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:15:09 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 10:47:21 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     //Con espacios al principio y al final
//     char str1[] = "   Hola Mundo   ";
//     char set1[] = " ";
//     char *result1 = ft_strtrim(str1, set1);
//     printf("Resultado 1: '%s'\n", result1);
//     free(result1);

//     // Solo espacios
//     char str2[] = "Mundo";
//     char *result2 = ft_strtrim(str2, set1);
//     printf("Resultado 2: '%s'\n", result2);
//     free(result2);

//     return 0;
// }