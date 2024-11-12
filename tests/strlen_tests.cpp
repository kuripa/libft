/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:56:27 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 19:59:11 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

// Test case to check if ft_strlen handles NULL input correctly
TEST(FtStrlenTest, NullInput) {
    EXPECT_EQ(ft_strlen(NULL), 0);
}

// Test case to check if ft_strlen calculates the length of an empty string correctly
TEST(FtStrlenTest, EmptyString) {
    EXPECT_EQ(ft_strlen(""), 0);
}

// Test case to check if ft_strlen calculates the length of a short string correctly
TEST(FtStrlenTest, ShortString) {
    EXPECT_EQ(ft_strlen("Hello"), 5);
}

// Test case to check if ft_strlen calculates the length of a longer string correctly
TEST(FtStrlenTest, LongString) {
    EXPECT_EQ(ft_strlen("The quick brown fox jumps over the lazy dog"), 43);
}

// Test case to check if ft_strlen handles strings with special characters correctly
TEST(FtStrlenTest, SpecialCharacters) {
    EXPECT_EQ(ft_strlen("!@#$%^&*()"), 10);
}

// Test case to check if ft_strlen handles strings with spaces correctly
TEST(FtStrlenTest, StringWithSpaces) {
    EXPECT_EQ(ft_strlen("Hello world!"), 12);
}
