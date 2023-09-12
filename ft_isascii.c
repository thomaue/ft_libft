/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:49:30 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:49:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int isascii(int c)
{
    return(c <= 127);
}

// int main(void)
// {
//     // return 0

//     printf("%d\n", isascii('Œ'));
//     printf("%d\n", isascii('♀'));
//     printf("%d\n", isascii('™'));

//     // return 1

//     printf("%d\n", isascii('a'));
//     printf("%d\n", isascii('0'));
//     printf("%d\n", isascii('2'));

//     return (0);
// }
