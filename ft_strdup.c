/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:09:07 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 22:09:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len_s = ft_strlen(s);


    char *str = (char *)malloc(sizeof(char) * (len_s + 1));
    if(!str)
        return NULL;

    char *ptr = str;
    while(len_s-- > 0)
        *str++ = *s++;
    *str = '\0';
    return (ptr);
}

// int main(void)
// {
//     char *test = "phrase tester";

//     char *result = ft_strdup(test);

//     printf("%s\n", result);

//     free(result);

//     return (0);
// }
