/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:57:41 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/13 21:54:13 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char* s1, const char* s2, size_t n)
{

    if (s1 == NULL || s2 == NULL)
        return 0;
    
    while (n > 0)
    {
        // If characters at same position are different or null character is reached in any string
        if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
            return (unsigned char)*s1 - (unsigned char)*s2;

        s1++;
        s2++;
        n--;
    }
    return 0;
}
