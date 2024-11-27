/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 07:03:32 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/27 07:23:20 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t src_len = ft_strlen(src); 

    if (dsize > 0) {
        char *dst_ptr = dst;
        while (*src && dsize > 1) {
            *dst_ptr++ = *src++;
            dsize--;
        }
        *dst_ptr = '\0'; 
    }

    return src_len; 
}
