/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:35:52 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:35:52 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (str);
}

// int main(void)
// {
//     int array [] = {15 , 20, 50, 60 ,42, 42 , 20};
//     int size = sizeof(int) * 7;

//     for(int size = 0; size < 7; size++)
//         printf("%d ", array[size]);
//     printf("\n");

//     ft_memset(array, '0' , size);

//     for(size = 0; size < 7; size++)
//         printf("%c ", array[size]);
//     printf("\n");

//     return (0);
// }