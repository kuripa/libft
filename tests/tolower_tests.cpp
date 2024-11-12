/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:22:41 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 21:24:14 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

// Test case for lowercase letters
TEST(TolowerTest, LowercaseLetters) {
    EXPECT_EQ(ft_tolower('a'), 'a');
    EXPECT_EQ(ft_tolower('b'), 'b');
    EXPECT_EQ(ft_tolower('z'), 'z');
}

// Test case for uppercase letters (should remain unchanged)
TEST(TolowerTest, UppercaseLetters) {
    EXPECT_EQ(ft_tolower('A'), 'a');
    EXPECT_EQ(ft_tolower('B'), 'b');
    EXPECT_EQ(ft_tolower('Z'), 'z');
}

// Test case for non-alphabetic characters (should remain unchanged)
TEST(TolowerTest, NonAlphabeticCharacters) {
    EXPECT_EQ(ft_tolower('1'), '1');
    EXPECT_EQ(ft_tolower('!'), '!');
    EXPECT_EQ(ft_tolower(' '), ' ');
}

// Test case for mixed case
TEST(TolowerTest, MixedCase) {
    EXPECT_EQ(ft_tolower('A'), 'a');
    EXPECT_EQ(ft_tolower('a'), 'a');
    EXPECT_EQ(ft_tolower('Z'), 'z');
    EXPECT_EQ(ft_tolower('z'), 'z');
    EXPECT_EQ(ft_tolower('?'), '?');
    EXPECT_EQ(ft_tolower('2'), '2');
}

// Test case for edge ASCII values
TEST(TolowerTest, EdgeCases) {
    EXPECT_EQ(ft_tolower(0), 0);
    EXPECT_EQ(ft_tolower(127), 127);
}
