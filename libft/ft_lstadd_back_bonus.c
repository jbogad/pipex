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

// The function adds a new element to the end of the linked list.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *list = NULL;

//     ft_lstadd_back(&list, ft_lstnew("Node"));

//     t_list *temp = list;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     return 0;
// }