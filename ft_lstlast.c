/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 03:48:42 by tauer             #+#    #+#             */
/*   Updated: 2023/11/13 13:50:40 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list *first = ft_lstnew("first one");
// 	t_list *second = ft_lstnew("second one");
// 	t_list *third = ft_lstnew("third one");

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	t_list *stock = ft_lstlast(first);

// 	printf("%s\n", stock->content);

// 	return (0);
// }