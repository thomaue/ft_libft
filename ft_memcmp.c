/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:44:42 by tauer             #+#    #+#             */
/*   Updated: 2023/11/08 17:44:42 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


int	ft_memcmp(const void *pointer1, const void *pointeur2, size_t size)
{
	size_t i = 0;

	while (i < size)
	{
		if (((unsigned char *)pointer1)[i] != ((unsigned char *)pointeur2)[i])
			return (((unsigned char *)pointer1)[i] - ((unsigned char *)pointeur2)[i]);
		i++;
	}
	return(0);
}

// int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
// {
// 	return (ft_strncmp((const char *)pointer1, (const char *)pointer2, size));
// }

// int   main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};

//   	printf("difference ascii : %d\n", ft_memcmp(s, sCpy, 4));

//   	return (0);
// }