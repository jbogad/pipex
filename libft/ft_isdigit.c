/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:49 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 11:20:17 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function checks if a character is a digit.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_isdigit('0'));

//     return 0;
// }