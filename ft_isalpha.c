/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:39 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:29:39 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_tolower(c) >= 'a' && ft_tolower(c) <= 'z')
		return (1);
	return (0);
}

// int main(void)
// {
//     for(int i = 45; i <= 75; i++)
//         printf("%c : %d\n", i, ft_isalpha(i));
//     return (0);
// }