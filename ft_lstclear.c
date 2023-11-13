/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 07:11:51 by tauer             #+#    #+#             */
/*   Updated: 2023/11/13 14:09:18 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// void	custom_del_clear(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *first = ft_lstnew(ft_strdup("first"));
// 	t_list *second = ft_lstnew(ft_strdup("second"));
// 	t_list *third = ft_lstnew(ft_strdup("third"));

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	ft_lstclear(&first, custom_del_clear);

// 	//valgrind --leak-check=full ./a.out

// 	return (0);
// }