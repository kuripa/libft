/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 03:40:34 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 03:46:00 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <gtest/gtest.h>
#include <cstring>

extern "C" {
    #include "../libft.h"
}

TEST(MemsetTest, Basic) {
    char buffer[50];
    ft_memset(buffer, 'A', 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(buffer[i], 'A');
    }
}

TEST(MemsetTest, ZeroLength) {
    char buffer[50];
    memset(buffer, 'B', 50);
    ft_memset(buffer, 'A', 0);
    for (int i = 0; i < 50; ++i) {
        EXPECT_EQ(buffer[i], 'B');
    }
}

TEST(MemsetTest, FillEntireBuffer) {
    char buffer[10];
    ft_memset(buffer, 'C', 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(buffer[i], 'C');
    }
}

TEST(MemsetTest, FillPartialBuffer) {
    char buffer[10];
    memset(buffer, 'D', 10);
    ft_memset(buffer, 'E', 5);
    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(buffer[i], 'E');
    }
    for (int i = 5; i < 10; ++i) {
        EXPECT_EQ(buffer[i], 'D');
    }
}

