/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:05:31 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 20:05:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return(char *)s;
        s++;
    }

    if(c == '\0')
        return ((char *)s);

    return (NULL);
}

// int main(void)
// {
//     char *str = "helo les copains";

//     int c = 'c';

//     printf("%s\n", strchr(str, c));

//     return (0);
// }