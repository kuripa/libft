/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:42:46 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/13 22:01:50 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(StrncmpTests, NullPointer) {
    EXPECT_EQ(ft_strncmp(NULL, NULL, 0), 0);
    EXPECT_EQ(ft_strncmp("Test", NULL, 0), 0);
    EXPECT_EQ(ft_strncmp(NULL, "Test", 0), 0);
}

TEST(StrncmpTests, EqualStrings)
{
    EXPECT_EQ(ft_strncmp("Test", "Test", 4), 0);
    EXPECT_EQ(ft_strncmp("neovim", "neovim", 3), 0);
}

TEST(StrncmpTests, SizeBigger)
{
    EXPECT_EQ(ft_strncmp("Test", "Test", 10), 0);
    EXPECT_EQ(ft_strncmp("neovim", "neovim", 200), 0);
}

TEST(StrncmpTests, UnequalStrings) {

    EXPECT_EQ(ft_strncmp("ABC", "AB", 5), 67);
    EXPECT_GT(ft_strncmp("hello", "hella", 5), 0);
    EXPECT_LT(ft_strncmp("hella", "hello", 5), 0);
}

TEST(StrncmpTests, ZeroLength) {
    EXPECT_EQ(ft_strncmp("hello", "hello", 0), 0);
    EXPECT_EQ(ft_strncmp("hello", "hella", 0), 0);
}

TEST(StrncmpTests, DifferentLengths) {
    EXPECT_GT(ft_strncmp("hello", "hell", 5), 0);
    EXPECT_LT(ft_strncmp("hell", "hello", 5), 0);
}

TEST(StrncmpTests, SubstringComparison) {
    EXPECT_EQ(ft_strncmp("hello", "hell", 4), 0);
    EXPECT_EQ(ft_strncmp("hell", "hello", 4), 0);
}

