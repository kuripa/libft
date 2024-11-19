/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_tests.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 03:44:47 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 03:46:24 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(BzeroTest, ZeroBytes) {
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer, 0);
    EXPECT_STREQ(buffer, "abcdefghi");
}

TEST(BzeroTest, PartialZeroing) {
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer + 2, 3);
    EXPECT_EQ(buffer[2], 0);
    EXPECT_EQ(buffer[3], 0);
    EXPECT_EQ(buffer[4], 0);
    EXPECT_EQ(buffer[5], 'f');
}

TEST(BzeroTest, FullZeroing) {
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer, 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(buffer[i], 0);
    }
}

TEST(BzeroTest, EmptyBuffer) {
    char buffer[1] = "";
    ft_bzero(buffer, 1);
    EXPECT_EQ(buffer[0], 0);
}

