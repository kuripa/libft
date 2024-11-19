/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 03:18:43 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 03:38:35 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *buffer, int value, size_t count)
{
    unsigned char *buffer_ptr = buffer;
    while (count > 0)
    {
       *buffer_ptr = (unsigned char)value;
       buffer_ptr++;
       count--;
        
    }
    return buffer;
}
