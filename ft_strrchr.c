/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:20:54 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 20:20:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char *strrchr(const char *s, int c)
{
    const char *l;

    l = NULL;
    while(*s)
    {
        if(*s == c)
            l = s;
        s++;
    }

    if(c == '\0')
        return (char *)s;
    if(*s == '\0' && l != NULL)
        return (char *)l;
    return(NULL);
}

// int main(void)
// {
//     char *str = "hcelo clesc copins";
//     int c = 'c';

//     char *result = strrchr(str, c);

//     if(result == NULL) {
//         printf("(null)\n");
//         return (0); }
//     printf("%s\n", result);

//     return (0);
// }