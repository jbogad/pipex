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

//adds a new node to the beginnig of a linked list

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new ->next = *lst;
	*lst = new;
}
