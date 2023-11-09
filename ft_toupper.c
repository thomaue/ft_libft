/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:50 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:45:50 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		(c -= 32);
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