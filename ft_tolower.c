/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:02:53 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 20:02:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return(c += 32);
    return (c);
}

// int main(void)
// {
//     char str[] = "TEST_tolower";

//     for(int i; str[i]; i++)
//         printf("%c", tolower(str[i]));
//     printf("\n");

//     return (0);
// }