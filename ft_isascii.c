/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:47 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:29:47 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
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
