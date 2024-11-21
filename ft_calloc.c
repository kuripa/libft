/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 01:15:03 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/21 08:39:49 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t total_size;
    
    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(1); 
        if (ptr == NULL)
            return NULL;
        return ptr;
    }

    if (size > SIZE_MAX / nmemb)
        return NULL;

    total_size = nmemb * size;

    ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;

    ft_bzero(ptr, total_size); 
    return ptr;
}
