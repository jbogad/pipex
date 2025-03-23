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

// function converts an integer to its string (ASCII)

#include "libft.h"

size_t	get_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	num;

	size = get_size(n);
	num = n;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		num = -num;
	while (size > 0)
	{
		str[--size] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
//     int number = -12345;
//     char *result = ft_itoa(number);
//     if (result)
//     {
//         printf("Number: %d -> String: %s\n", number, result);
//         free(result);
//     }
//     else
//         printf("Memory allocation failed.\n");

//     return (0);
// }