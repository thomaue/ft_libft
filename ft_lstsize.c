/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:31:53 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 03:48:11 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	// t_list	*first = NULL;

// 	t_list *first = ft_lstnew("premier element");
// 	t_list *second = ft_lstnew("deuxieme element");
// 	t_list *third = ft_lstnew("troisieme element");

// 	// ft_lstadd_front(&first, second);
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	int size_lst = ft_lstsize(first);

// 	printf("list size : %d\n", size_lst);

// 	return 0;
// }