/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:39:13 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 20:03:08 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    
    if (s == NULL)
        return 0;

    const char *ptr = s;
    
    while (*s != '\0')
    {
        s++;
    }
  
    return s - ptr;
}
