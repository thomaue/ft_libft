/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:18:26 by marvin            #+#    #+#             */
/*   Updated: 2023/11/02 11:18:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long num = n;
    
    if(num < 0)
    {
        ft_putchar_fd('-', fd);
        num = -num;
    }

    if(num > 9)
        ft_putnbr_fd(num / 10, fd);
        
    ft_putchar_fd(num % 10 + 48, fd);
}

// int main(void)
// {
//     int num = INT_MAX;



//     return (0);
// }

