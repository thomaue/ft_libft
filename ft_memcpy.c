/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:11 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *ptr_dst = (unsigned char *)dst;        
    unsigned char *ptr_src = (unsigned char *)src;

    while(n > 0)
    {
        *ptr_dst++ = *ptr_src++;
        n--;
    }
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
//     return 0;
// }
