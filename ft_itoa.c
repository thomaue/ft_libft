/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:44:17 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:44:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_mal_the_num(long int nbr, int len_nb)
{   
    char *str_num;
    int null_size;

    if(nbr < 0)
    {
        null_size = 2;
        nbr *= -1;
    }
    else
        null_size = 1;

    while(nbr > 0)
    {
        nbr/=10;
        len_nb++;
    }

    str_num = (char *)malloc(sizeof(char) * (len_nb + null_size));
    if(!str_num)
        return (NULL);
    
    return (str_num);
}

char *str_fill(char *mal_space, long int nbr, int sign)
{
    int i;

    i = 0;
    while(nbr > 0)
    {
        mal_space[i++] = nbr % 10 + '0';
        nbr/=10;
    }
    if(sign == 1)
        mal_space[i++] = '-';
    mal_space[i] = '\0';

    return (mal_space);
}

char *rev_num(char *str_num)
{
    size_t len_str;
    size_t i;
    char temp;

    len_str = 0;
    i = 0;

    while(str_num[len_str])
        len_str++;

    while(i < len_str / 2)
    {
        temp = str_num[i];
        str_num[i] = str_num[len_str - i - 1];
        str_num[len_str - i - 1] = temp;
        i++;
    }
    return str_num;
}

char *ft_itoa(int nbr)
{
    char *str_mal;
    long int nb;

    nb = nbr;

    if(nb == 0)
    {
        str_mal = (char *)malloc(sizeof(char) * 2);
        str_mal[0] = '0';
        str_mal[1] = '\0';
        return (str_mal);
    }
    else if(nb < 0)
    {
        nb *= -1;
        return(rev_num(str_fill(ft_mal_the_num(nb, 0),nb, 1)));
    }
    else    
        return(rev_num(str_fill(ft_mal_the_num(nb, 0),nb, 0)));
    return (NULL);
}

// int main(void)
// {
//     int nbr_main = 123456789;

//     char *nbr_dup = ft_itoa(nbr_main);

//     printf("%s\n", nbr_dup);

//     free(nbr_dup);
//     return (0);
// }