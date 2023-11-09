/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:07 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:29:07 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	if (n <= 0)
		return ;
	c = s;
	while (n-- > 0)
		*c++ = 0;
}

// int main(void)
// {
//     int array [] = {15 , 20, 50, 60 ,42, 42 , 20};
//     int size = sizeof(int) * 7;

//     for(int size = 0; size < 7; size++)
//         printf("%d ", array[size]);
//     printf("\n");

//     ft_bzero(array, size);

//     for(size = 0; size < 7; size++)
//         printf("%d ", array[size]);
//     printf("\n");

//     return (0);
// }
