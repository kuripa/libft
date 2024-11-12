/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:45:14 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 22:21:07 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (0);

    const char *ptr = s; 
    
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ptr - s;
        }
        s++;
    }
    if (*s == '\0')
        return 
    
            return NULL;
}
