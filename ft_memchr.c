/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:52:39 by marvin            #+#    #+#             */
/*   Updated: 2023/09/13 12:52:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr_s = (unsigned char *)s;

    while(n > 0)
    {
        if(*ptr_s++ == c)
            return (ptr_s);
        n--;
    }
    return(NULL);
}

// int main(void)
// {
//     char *str = "botte de foin";

//     int c = 'z';

//     size_t i = 13;

//     printf("%p\n", memchr(str, c, i));

//     return (0);
// }