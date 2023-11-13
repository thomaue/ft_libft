/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:27:57 by tauer             #+#    #+#             */
/*   Updated: 2023/11/13 14:03:58 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(int nb, long int nbr, int size)
{
	char	*str;

	if (nb == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	str[size - 1] = '\0';
	size -= 2;
	while (nbr)
	{
		str[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && nb < 0)
		str[size] = '-';
	return (str);
}

static int	mal_size(int nb, long int nbr, int size)
{
	if (nb < 0)
		size += 2;
	else
		size += 1;
	while (nbr)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nb < 0)
		nbr *= -1;
	return (fill(nb, nbr, mal_size(nb, nbr, 0)));
}

// int	main(void)
// {
// 	char	*test;

// 	test = ft_itoa(-111111110);

// 	printf("%s\n", test);

// 	free(test);
// 	return (0);
// }
