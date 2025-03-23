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

//create a new node for a linked list;

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*try;

	try = (t_list *)malloc(sizeof(t_list));
	if (!try)
		return (NULL);
	try->content = (void *)content;
	try->next = NULL;
	return (try);
}

// #include <stdio.h>
// int main(void)
// {
//     char *content = "Hola, 42 Madrid";
//     t_list *new_node;
//     new_node = ft_lstnew(content);
//     if (new_node)
//     {
//         printf("Content: %s\n", (char *)new_node->content);
//         free(new_node);
//     }
//     else
//         printf("Error: No se pudo crear el nuevo nodo.\n");
//     return (0);
// }	