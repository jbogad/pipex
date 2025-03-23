/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:54 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 11:25:38 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks if a character is a letter of the alphabet

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));  // Debería devolver 1
//     printf("ft_isalpha(' ') = %d\n", ft_isalpha(' '));  // Debería devolver 0
//     return 0;
// }