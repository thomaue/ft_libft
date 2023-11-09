/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/09/12 18:44:27 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main(void)
// {
//     for(int i = 45; i <= 70; i++)
//         printf("%c : %d\n", i, ft_isalnum(i));
//     return (0);
// }