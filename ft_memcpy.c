/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:32:50 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:32:50 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;

	ptr_dst = (unsigned char *)dst;
	while (n--)
		*ptr_dst++ = *(unsigned char *)src++;
	return (dst);
}

// int main(void)
// {
//     int array [] = {15 , 20, 50, 60 ,42, 42 , 20};
//     int *num_dst = NULL;
//     int size = sizeof(int) * 7;

//     num_dst = (int *)malloc(size);
//     ft_memcpy(num_dst, array, size);

//     for(size = 0; size < 7; size++)
//         printf("%d - %d\n", array[size], num_dst[size]);

//     free(num_dst);
//     return (0);
// }
