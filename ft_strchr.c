/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:38:44 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:38:44 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	i = 0;
	while (i <= size)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char s[] = "tripouille";
//     printf("%s\n", strchr(s, 't' + 256));
// 	printf("%s\n", ft_strchr(s, 't' + 256));
//     return (0);
// }