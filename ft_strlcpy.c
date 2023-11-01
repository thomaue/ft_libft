/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:46:29 by tauer             #+#    #+#             */
/*   Updated: 2023/11/01 17:00:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char dest_origin[15] = "ft_";
// 	const char src_origin[] = "concate";
// 	unsigned int size_origin = 6;

// 	strlcpy(dest_origin, src_origin, size_origin);
// 	printf("int: %ld\n", strlcpy(dest_origin, src_origin, size_origin));
// 	printf("returned dest : %s\n\n", dest_origin);

// 	char dest[15] = "ft_";
// 	char src[] = "concate";
// 	unsigned int size = 6;

// 	ft_strlcpy(dest, src, size);
// 	printf("returned int : %d\n", ft_strlcpy(dest, src, size));
// 	printf("return dest :%s\n\n", dest);
// 	return 0;
// }
