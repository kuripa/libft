/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:17:35 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/12 01:09:24 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(IsAlNumTest, HandlesNumericChars) {
    EXPECT_EQ(ft_isalnum('0'), 1);
    EXPECT_EQ(ft_isalnum('9'), 1);
    EXPECT_EQ(ft_isalnum('5'), 1);
}

TEST(IsAlNumTest, HandlesAlphabeticChars) {
    EXPECT_EQ(ft_isalpha('a'), 1);
    EXPECT_EQ(ft_isalpha('Z'), 1);
    EXPECT_EQ(ft_isalpha('m'), 1);
}

TEST(IsAlNumTest, HandlesNonNumericChars) {
    EXPECT_EQ(ft_isalnum('@'), 0);
    EXPECT_EQ(ft_isalnum(' '), 0);
    EXPECT_EQ(ft_isalnum('$'), 0);
}

TEST(IsAlNumTest, HandlesBoundaryCasesAlpha) {
    EXPECT_EQ(ft_isalpha('A' - 1), 0); // Char before 'A'
    EXPECT_EQ(ft_isalpha('Z' + 1), 0); // Char after 'Z'
    EXPECT_EQ(ft_isalpha('a' - 1), 0); // Char before 'a'
    EXPECT_EQ(ft_isalpha('z' + 1), 0); // Char after 'z'
}
// Boundary cases: Characters before and after '0' and '9' in ASCII table

TEST(IsAlNumTest, HandlesBoundaryCasesNumeric) {
    EXPECT_EQ(ft_isalnum('/'), 0); // Char before '0'
    EXPECT_EQ(ft_isalnum(':'), 0); // Char after '9'
}

// Extended ASCII characters
TEST(IsAlNumTest, HandlesExtendedASCIICases) {
    EXPECT_EQ(ft_isalnum(128), 0); // Extended ASCII (128+)
    EXPECT_EQ(ft_isalnum(255), 0); // Extended ASCII (255)
}

// Additional special characters
TEST(IsAlNumTest, HandlesSpecialCharacters) {
    EXPECT_EQ(ft_isalnum('!'), 0);
    EXPECT_EQ(ft_isalnum('~'), 0);
    EXPECT_EQ(ft_isalnum('#'), 0);
}

TEST(IsAlNumTest, HandlesAllAlphabetRanges) {
    for (char c = 'A'; c <= 'Z'; ++c) {
        EXPECT_EQ(ft_isalpha(c), 1);
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        EXPECT_EQ(ft_isalpha(c), 1);
    }
}

// Non-printable characters
TEST(IsAlNumTest, HandlesNonPrintableChars) {
    EXPECT_EQ(ft_isalpha('\t'), 0);
    EXPECT_EQ(ft_isalpha('\n'), 0);
    EXPECT_EQ(ft_isalpha('\0'), 0);
}
