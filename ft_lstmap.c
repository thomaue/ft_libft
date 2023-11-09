/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:32:41 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 15:17:08 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy_f;
	t_list	*new_node;

	cpy_f = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&cpy_f, del);
			return (NULL);
		}
		ft_lstadd_back(&cpy_f, new_node);
		if (cpy_f == NULL)
			return (NULL);
		lst = lst->next;
	}
	return (cpy_f);
}


// void	del_node(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *first = ft_lstnew("first one");
// 	t_list *second = ft_lstnew("second one");
// 	t_list *third = ft_lstnew("third one");

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	t_list *stock = ft_lstmap(first, ft_strupcase, del_node);

// 	while(stock)
// 	{
// 		printf("%s\n", stock->content);
// 		stock = stock->next;
// 	}
	
// 	return (0);
// }

