/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 03:57:40 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 04:42:18 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
    char *dest_ptr = dest;
    const char *src_ptr = src;
    
	while (count > 0)
	{
        *dest_ptr++ = *src_ptr++;
		count--;
	}
    return dest;
}
