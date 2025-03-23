/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:09:31 by jaboga-d          #+#    #+#             */
/*   Updated: 2025/01/28 12:00:54 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function iterates over a linked list and applies the given 
// function f to the content of each node. 

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// void	print_content(void *content)
// {
// 	printf("%d\n", *(int *)content);
// }

// int	main(void)
// {
// 	int value = 42;
// 	t_list *node = malloc(sizeof(t_list));
// 	node->content = &value;
// 	node->next = NULL;
// 	ft_lstiter(node, print_content);
// 	free(node);

// 	return 0;
// }
