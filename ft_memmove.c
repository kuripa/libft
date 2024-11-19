/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 04:54:23 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 05:05:08 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t count)
{
    char *dest_ptr = dest;
    const char *src_ptr = src;

    if (count == 0)
        return dest;

    if (dest_ptr < src_ptr)
    {
        while (count--)
            *dest_ptr++ = *src_ptr++;
    }
    else
    {
        const char *lasts = src_ptr + (count - 1);
        char *lastd = dest_ptr + (count - 1);
        while (count--)
            *lastd-- = *lasts--;
    }

    return dest;
}
