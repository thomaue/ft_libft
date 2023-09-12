/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:24 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int is_lower(int c)
{
    return(c >= 'a' && c <= 'z');
}

int is_upper(int c)
{
    return(c >= 'A' && c <= 'Z');
}

int isalpha(int c)
{
    return (is_lower(c) || is_upper(c));
}

// int main(void)
// {
//     for(int i = 45; i <= 75; i++)
//         printf("%c : %d\n", i, isalpha(i));
//     return (0);
// }