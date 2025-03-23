/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:18:17 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/13 16:19:44 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (((i + j) < len) && (haystack[i + j] == needle[j])
			&& needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
