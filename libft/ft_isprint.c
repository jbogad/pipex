/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:46 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 11:26:04 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isprint function checks if a character is printable.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_isprint('A'));
//     return 0;
// }