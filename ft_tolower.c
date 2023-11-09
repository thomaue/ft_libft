/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:38 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:45:38 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		(c += 32);
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