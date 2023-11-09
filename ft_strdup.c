/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:39:38 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:39:38 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*str;
	char	*ptr;

	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!str)
		return (NULL);
	ptr = str;
	while (len_s-- > 0)
		*str++ = *s++;
	*str = '\0';
	return (ptr);
}

// int main(void)
// {
//     char *test = "phrase tester";

//     char *result = ft_strdup(test);

//     printf("%s\n", result);

//     free(result);

//     return (0);
// }
