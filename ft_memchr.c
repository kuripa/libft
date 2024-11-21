/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:52:01 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/21 09:03:15 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t size)
{
    if (s == NULL)
        return NULL;

    const unsigned char *ptr = (const unsigned char *)s; 

    while (size > 0)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr; 
        ptr++;
        size--;
    }

    return NULL;
}
