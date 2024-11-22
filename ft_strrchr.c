/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:55:37 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/22 07:03:51 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
   
    char *last;
    last = NULL;
 
    while(*s)
    {
        if (*s == (char)c) 
            last = (char*)s;
        
        s++;
    }
    
    if (c == '\0')
        return (char *)s;
    
    return last;
}
