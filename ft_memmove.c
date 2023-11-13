/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:02 by tauer             #+#    #+#             */
/*   Updated: 2023/11/06 15:33:02 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	if (dst == src)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (dst > src)
	{
		while (n > 0)
		{
			ptr_dst[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	else
		memcpy(dst, src, n);
	return (dst);
}

// int   main(void)
//   {
//     char *dst = strdup("contigo");
//     char *src = strdup("poco loco");

//     printf("dst : %s / %p\n", dst, ft_memmove(dst, src, 10));

//     free(dst);
//     free(src);

//     return (0);
//   }