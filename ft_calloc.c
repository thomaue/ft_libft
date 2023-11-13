/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:17 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:29:17 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		tot;

	tot = nmemb * size;
	if (nmemb && tot / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(tot);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tot);
	return (ptr);
}

// int	main(void)
// {
// 	void *test = ft_calloc(3, -5);

// 	free(test);
// 	return (0);
// }