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

// frees all nodes in a linked list and deletes their content 

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}

// void ft_del(void *content)
// {
//     free(content);
// }
// #include <stdio.h>

// int main(void)
// {
//     t_list *list = NULL;
//     ft_lstadd_back(&list, ft_lstnew("First"));
//     ft_lstadd_back(&list, ft_lstnew("Second"));
//     ft_lstadd_back(&list, ft_lstnew("Third"));

//     printf("Before clearing:\n");
//     t_list *temp = list;

//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     ft_lstclear(&list, ft_del);

//     printf("After clearing:\n");

//     if (list == NULL)
//         printf("List is now empty.\n");

//     return 0;
// }