/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:17:35 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/11 23:21:15 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(IsDigitTest, HandlesNumericChars) {
    EXPECT_EQ(ft_isdigit('0'), 1);
    EXPECT_EQ(ft_isdigit('9'), 1);
    EXPECT_EQ(ft_isdigit('5'), 1);
}

TEST(IsDigitTest, HandlesNonNumericChars) {
    EXPECT_EQ(ft_isdigit('I'), 0);
    EXPECT_EQ(ft_isdigit('@'), 0);
    EXPECT_EQ(ft_isdigit(' '), 0);
}
