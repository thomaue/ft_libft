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

int	ft_is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_is_lower(c) || ft_is_upper(c));
}

// int main(void)
// {
//     for(int i = 45; i <= 75; i++)
//         printf("%c : %d\n", i, ft_isalpha(i));
//     return (0);
// }