/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:29 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *c = (unsigned char *)s;
    while(n > 0)
    {
        *c++ = 0;
        n--;
    }
}

// int main(void)
// {
//     int array [] = {15 , 20, 50, 60 ,42, 42 , 20};
//     int size = sizeof(int) * 7;

//     for(int size = 0; size < 7; size++)
//         printf("%d ", array[size]);
//     printf("\n");

//     ft_bzero(array, size);

//     for(size = 0; size < 7; size++)
//         printf("%d ", array[size]);
//     printf("\n");

//     return 0;
// }
