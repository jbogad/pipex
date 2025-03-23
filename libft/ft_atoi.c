/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:41 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/15 12:35:41 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts a string to an integer

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char input[100];

// 	printf("Introduce un número (puede incluir espacios o signos): ");
// 	scanf("%99s", input);

// 	int result = ft_atoi(input);

// 	printf("El número convertido es: %d\n", result);

// 	return (0);
// }