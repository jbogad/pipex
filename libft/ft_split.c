/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:03:51 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/03/23 12:15:04 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

size_t	ft_count_letter(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_printca(const char *s, char c)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = ft_calloc(ft_count_letter(s, c) + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_free(char **arr, size_t delet)
{
	while (delet > 0)
		free(arr[--delet]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char **) ft_calloc (sizeof(char *), ft_count_words (s, c) + 1);
	if (!str || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = ft_printca ((char *)s + i, c);
			if (!str[j])
				return (ft_free(str, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	str[j] = NULL;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*test = NULL;
// 	char	**result;

// 	result = ft_split(test, "hola quee tal");
// 	if (!result)
// 	{
// 		printf("Valor NULL\n");
// 	}
// 	else
// 	{
// 		int i = 0;
// 		while (result[i])
// 		{
// 			printf("Palabra %d: %s\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	return (0);
// }