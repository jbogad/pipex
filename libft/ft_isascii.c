/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:51 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 15:15:20 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isascii function checks if a character is ASCII.

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_isascii('A'));
//     return 0;
// }