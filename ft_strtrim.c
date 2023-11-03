/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:46:50 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 09:46:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_set(char c, char const *set)
{
    while(*set)
    {
        if(*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end = ft_strlen(s1);
    size_t i = 0;

    char *str;

    while(s1[start] && is_set(s1[start], set) == 1)
        start++;
    while(end > start && is_set(s1[end - 1], set) == 1)
        end--;
    
    str = (char *)malloc(sizeof(char) * (end - start + 1));
    if(!str)
        return (NULL);
    
    while(start < end)
        str[i++] = s1[start++];
    str[i] = '\0';
    return (str);
}