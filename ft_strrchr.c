/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:43:51 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:43:51 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     char *str = "hcelo clesc copins";
//     int c = 'c';

//     char *result = strrchr(str, c);

//     if(result == NULL) {
//         printf("(null)\n");
//         return (0); }
//     printf("%s\n", result);

//     return (0);
// }