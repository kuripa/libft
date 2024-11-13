/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:45:14 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 22:21:07 by nfuhrman         ###   ########.fr       */
/*                                                                            */ /* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (0);

    
    while (*s != '\0')
    {
        if (*s == (char) c)
        {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0')
        return (char *) s;
    
    return NULL;
}
