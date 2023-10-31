/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:20:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/22 11:20:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1 , const char *s2 ,size_t  len)
{
    if(*s2 == '\0')
        return (char *)s1;

    size_t s2_size = strlen(s2);

    while(*s1 != '\0' && len >= s2_size)
    {
        if(strncmp(s1, s2, s2_size) == 0)
            return((char *)s1);
        s1++;
        len--;
    }
    return NULL;
}

int main(void)
{
    const char *str1 = "salut les copains";
    const char *str2 = "copains";

    printf("%s\n", ft_strnstr(str1, str2, 8));

    return (0);
}