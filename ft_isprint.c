/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:13:15 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 18:14:44 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c) {
    // Printable ASCII characters are from 32 to 126 inclusive
    return (c >= 32 && c <= 126);
}
