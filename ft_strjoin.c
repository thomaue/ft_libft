/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:41:14 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:41:14 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	result = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (result);
}

// int main(void)
// {
//     char *s1 = "this is the";
//     char *s2 = " absolute test";

//     char *result = ft_strjoin(s1, s2);

//     if(result == NULL)
//         printf("s1 || s2 empty");
//     else
//     {
//         printf("%s:%s -> [%s]\n", s1, s2, result);
//         free(result);
//     }

//     return (0);
// }