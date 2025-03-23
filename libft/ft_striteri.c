/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:39 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 16:03:54 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//applies a given function to each character of a string

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>
// void change_caracter(unsigned int i, char *c)
// {
//     if (i == 2)
//         *c = (*c >= 'a' && *c <= 'z') ? *c - 32 : *c;
//     if (i == 4)
//         *c = *c + 1;
// }

// int main()
// {
//     char texto[] = "javierboga";
//     ft_striteri(texto, change_caracter);
//     printf("%s\n", texto);
//     return 0;
// }
