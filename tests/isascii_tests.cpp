/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:30:32 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 18:18:43 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(IsAsciiTest, LowerBoundEdgeCase) {
    EXPECT_EQ(ft_isascii(0), 1);
}

TEST(IsAsciiTest, UpperBoundEdgeCase) {
    EXPECT_EQ(ft_isascii(127), 1);
}

TEST(IsAsciiTest, BelowLowerBound) {
    EXPECT_EQ(ft_isascii(-1), 0);
    EXPECT_EQ(ft_isascii(-128), 0);
    EXPECT_EQ(ft_isascii(-255), 0);
}

TEST(IsAsciiTest, AboveUpperBound) {
    EXPECT_EQ(ft_isascii(128), 0);
    EXPECT_EQ(ft_isascii(255), 0);
    EXPECT_EQ(ft_isascii(1000), 0);
}

TEST(IsAsciiTest, WithinRange) {
    for (int i = 1; i < 127; ++i) {
        EXPECT_EQ(ft_isascii(i), 1);
    }
}
