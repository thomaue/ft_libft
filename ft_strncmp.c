/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:55:55 by tauer             #+#    #+#             */
/*   Updated: 2023/10/31 15:14:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && i < n - 1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char *s1 = "found R2A6";
// 	char *s2 = "found R2A6";
// 	int	size = -1;

// 	printf("mine :%d\n", ft_strncmp(s1, s2, size));
// 	printf("origin :%d\n", strncmp(s1,s2,size));
// 	return (0);
// }