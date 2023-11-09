/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:43:43 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 11:44:25 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (unsigned char *)content);
// }

// int	main(void)
// {
// 	t_list *first = ft_lstnew("first one");
// 	t_list *second = ft_lstnew("second one");
// 	t_list *third = ft_lstnew("third one");

// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	ft_lstiter(first, print_content);

// 	return (0);
// }
