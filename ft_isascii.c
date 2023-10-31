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

#include "libft.h"

int ft_isascii(int c)
{
    return(c <= 127);
}

// int main(void)
// {
//     // return 0

//     printf("%d\n", ft_isascii('Œ'));
//     printf("%d\n", ft_isascii('♀'));
//     printf("%d\n", ft_isascii('™'));

//     // return 1

//     printf("%d\n", ft_isascii('a'));
//     printf("%d\n", ft_isascii('0'));
//     printf("%d\n", ft_isascii('2'));

//     return (0);
// }
