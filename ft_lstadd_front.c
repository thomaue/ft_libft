/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:24:39 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 02:30:38 by tauer            ###   ########.fr       */
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

// new  -> next (lst)
// *lst -> next(NULL)
// omg on as une liste
// new -> lst -> NULL
// info-user2 -> info_user1 -> NULL
// on fait remonter l'info a la fonctionm du haut en changean lst

	*lst = new;
}



