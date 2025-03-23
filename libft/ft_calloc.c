/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:19:01 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/28 17:32:14 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates memory for an array and sets it to zero

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

// #include <stdio.h>
// int main()
// {
//     int *arr;

// 	arr = ft_calloc(5, sizeof(int));

// printf("arr[0] = %d\narr[1] = %d\narr[2] = %d\narr[3] = %d\narr[4] = %d\n", 
// arr[0], arr[1], arr[2], arr[3], arr[4]);
//     free(arr);
//     return 0;	
// }