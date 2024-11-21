/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 01:34:44 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/21 08:40:47 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(CallocTest, ZeroSize) {
    void *ptr = ft_calloc(0, 0);
    EXPECT_NE(ptr, nullptr);
    free(ptr);
}

TEST(CallocTest, RegularSize) {
    size_t num = 10;
    size_t size = sizeof(int);
    void *ptr = ft_calloc(num, size);
    ASSERT_NE(ptr, nullptr);
    int *int_ptr = static_cast<int *>(ptr);
    for (size_t i = 0; i < num; ++i) {
        EXPECT_EQ(int_ptr[i], 0);
    }
    free(ptr);
}

TEST(CallocTest, LargeSize) {
    size_t num = 1000;
    size_t size = sizeof(char);
    void *ptr = ft_calloc(num, size);
    ASSERT_NE(ptr, nullptr);
    char *char_ptr = static_cast<char *>(ptr);
    for (size_t i = 0; i < num; ++i) {
        EXPECT_EQ(char_ptr[i], 0);
    }
    free(ptr);
}

TEST(CallocTest, OverflowSize) {
    size_t num = SIZE_MAX;
    size_t size = 2;
    void *ptr = ft_calloc(num, size);
    EXPECT_EQ(ptr, nullptr);
}

