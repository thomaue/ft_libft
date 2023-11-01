/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:31 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(char c)
{
    return(c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v');
}

int ft_atoi(const char *str)
{
    size_t i;
    int sign;
    long int num;

    i = 0;
    sign = 1;
    num = 0;

    while(str[i] && ft_isspace(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
        if(str[i++] == '-')
            sign *= -1;
    while(str[i] >= '0' && str[i] <= '9')
        num = (num * 10) + (str[i++] - '0');
    return (num * sign);
}

// int main(void)
// {
//     char *str = "     124566322ABCDEF";

//     printf("%d\n", ft_atoi(str));

//     return 0;
// }