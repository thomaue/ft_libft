/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:52:18 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 19:52:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return(c -= 32);
    return (c);
}

// int main(void)
// {
//     char str[] = "TEST_toupper";

//     for(int i; str[i]; i++)
//         printf("%c", toupper(str[i]));
//     printf("\n");

//     return (0);
// }