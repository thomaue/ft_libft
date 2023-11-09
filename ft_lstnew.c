/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:31:19 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:31:19 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_one;

	new_one = (t_list *)malloc(sizeof(t_list));
	if (!new_one)
		return (NULL);
	new_one->content = (void *)content;
	new_one->next = NULL;
	return (new_one);
}
