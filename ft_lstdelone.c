/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:51:20 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 09:42:51 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	custom_del(void *content)
{
	free(content);
}

// int	main(void)
// {
// 	char *dup = ft_strdup("salut les ptits potes");	
// 	t_list *stock = ft_lstnew(dup);
// 	stock->next = NULL;

// 	ft_lstdelone(stock, custom_del);

// 	printf("%s\n", stock->content);

// 	return (0);	
// }