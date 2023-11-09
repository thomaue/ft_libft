/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:39 by tauer             #+#    #+#             */
/*   Updated: 2023/11/09 21:55:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/

// void foo(void)
// {
// 	t_list *head = ft_lstnew(info_user1);
// 	t_list *node = ft_lstnew(info_user2);

// 	head->next NULL
// 	node->next NULL
// 	-- todo --
// 	head->next NULL
// 	node->next head
// 	head->next->content; seg
// 	ft_lstadd_front(&head, node);
// 	head(apres appel) egale a node;
// 	head->next->content;
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
