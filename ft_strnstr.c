/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:43:37 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:43:37 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s1_size;
	size_t	s2_size;

	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	if (!len)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (s1_size < len)
		len = s1_size;
	while (*s1 && len >= s2_size)
	{
		if (ft_strncmp(s1, s2, s2_size) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *str1 = "salut les copains";
//     const char *str2 = "copains";

//     printf("%s\n", ft_strnstr(str1, str2, 8));

//     return (0);
// }