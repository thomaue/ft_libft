/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:41:10 by marvin            #+#    #+#             */
/*   Updated: 2023/11/02 09:41:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void * ptr;

    ptr = (void *)malloc(nmemb * size);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb);
    return (ptr);
}