/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:17:54 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/11 23:20:51 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(IsAlphaTest, HandlesAlphabeticChars) {
    EXPECT_EQ(ft_isalpha('a'), 1);
    EXPECT_EQ(ft_isalpha('Z'), 1);
    EXPECT_EQ(ft_isalpha('m'), 1);
}

TEST(IsAlphaTest, HandlesNonAlphabeticChars) {
    EXPECT_EQ(ft_isalpha('5'), 0);
    EXPECT_EQ(ft_isalpha('@'), 0);
    EXPECT_EQ(ft_isalpha(' '), 0);
}

// Extended ASCII characters
TEST(IsAlphaTest, HandlesExtendedASCIICases) {
    EXPECT_EQ(ft_isalpha(128), 0); // Extended ASCII (128+)
    EXPECT_EQ(ft_isalpha(255), 0); // Extended ASCII (255)
}

// Boundary cases: Characters before and after 'A' and 'a' in ASCII table
TEST(IsAlphaTest, HandlesBoundaryCases) {
    EXPECT_EQ(ft_isalpha('A' - 1), 0); // Char before 'A'
    EXPECT_EQ(ft_isalpha('Z' + 1), 0); // Char after 'Z'
    EXPECT_EQ(ft_isalpha('a' - 1), 0); // Char before 'a'
    EXPECT_EQ(ft_isalpha('z' + 1), 0); // Char after 'z'
}

// Alphabetic characters (entire lowercase and uppercase ranges)
TEST(IsAlphaTest, HandlesAllAlphabetRanges) {
    for (char c = 'A'; c <= 'Z'; ++c) {
        EXPECT_EQ(ft_isalpha(c), 1);
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        EXPECT_EQ(ft_isalpha(c), 1);
    }
}

// Additional special characters
TEST(IsAlphaTest, HandlesSpecialCharacters) {
    EXPECT_EQ(ft_isalpha('!'), 0);
    EXPECT_EQ(ft_isalpha('~'), 0);
    EXPECT_EQ(ft_isalpha('#'), 0);
}

// Non-printable characters
TEST(IsAlphaTest, HandlesNonPrintableChars) {
    EXPECT_EQ(ft_isalpha('\t'), 0);
    EXPECT_EQ(ft_isalpha('\n'), 0);
    EXPECT_EQ(ft_isalpha('\0'), 0);
}
