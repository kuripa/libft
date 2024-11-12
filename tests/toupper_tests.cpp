/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:22:29 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 21:24:44 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

// Test case for lowercase letters
TEST(ToupperTest, LowercaseLetters) {
    EXPECT_EQ(ft_toupper('a'), 'A');
    EXPECT_EQ(ft_toupper('b'), 'B');
    EXPECT_EQ(ft_toupper('z'), 'Z');
}

// Test case for uppercase letters (should remain unchanged)
TEST(ToupperTest, UppercaseLetters) {
    EXPECT_EQ(ft_toupper('A'), 'A');
    EXPECT_EQ(ft_toupper('B'), 'B');
    EXPECT_EQ(ft_toupper('Z'), 'Z');
}

// Test case for non-alphabetic characters (should remain unchanged)
TEST(ToupperTest, NonAlphabeticCharacters) {
    EXPECT_EQ(ft_toupper('1'), '1');
    EXPECT_EQ(ft_toupper('!'), '!');
    EXPECT_EQ(ft_toupper(' '), ' ');
}

// Test case for mixed case
TEST(ToupperTest, MixedCase) {
    EXPECT_EQ(ft_toupper('A'), 'A');
    EXPECT_EQ(ft_toupper('a'), 'A');
    EXPECT_EQ(ft_toupper('Z'), 'Z');
    EXPECT_EQ(ft_toupper('z'), 'Z');
    EXPECT_EQ(ft_toupper('?'), '?');
    EXPECT_EQ(ft_toupper('2'), '2');
}

// Test case for edge ASCII values
TEST(ToupperTest, EdgeCases) {
    EXPECT_EQ(ft_toupper(0), 0);
    EXPECT_EQ(ft_toupper(127), 127);
}
