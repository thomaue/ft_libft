/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:49:49 by tauer             #+#    #+#             */
/*   Updated: 2023/11/01 17:18:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size < 1)
		return (src_len + size);
	while (dest[i] != '\0')
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (size + src_len);
	else
		return (dest_len + src_len);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int size = 1;
// 	char dest[10] = "01234";
// 	char src[] = "ABCD";
// 	strlcat(dest, src, size);

// 	printf("real : %s\n", dest);
// 	printf("%ld\n\n", strlcat(dest, src, size));

// 	char dest_mine[10] = "01234";
// 	char src_mine[] = "ABCD";

// 	ft_strlcat(dest_mine, src_mine, size);
// 	printf("mine : %s\n", dest_mine);
// 	printf("%d\n", ft_strlcat(dest_mine, src_mine, size));

// 	return 0;
// }
