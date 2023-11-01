/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:55:55 by tauer             #+#    #+#             */
/*   Updated: 2023/11/01 22:23:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	while(n > 0)
	{
		if(*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (*s1 - *s2);

		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "test\200";
// 	char *s2 = "test\0";
// 	int	size = 6;

// 	printf("mine :%d\n", ft_strncmp(s1, s2, size));
// 	printf("origin :%d\n", strncmp(s1,s2,size));
// 	return (0);
// }