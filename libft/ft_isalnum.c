/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:58 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/14 15:10:17 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The ft_isalnum function checks if a character is alphanumeric.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_isalnum('a'));
//     return 0;
// }