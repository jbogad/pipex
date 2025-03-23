/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:46 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/17 11:47:36 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies a given function to each character of a string,
//  passing the index and the character as arguments, 
//  and returns a new string with the results.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
// #include <stdio.h>

// char    ft_toupper_index(unsigned int index, char c)
// {
//     return (index % 2 == 0) ? c - 32 : c;
// }

// int main(void)
// {
//     char *result = ft_strmapi("hello world", ft_toupper_index);
//     printf("%s\n", result);
//     free(result);
//     return 0;
// }
