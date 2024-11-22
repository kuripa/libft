/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 07:05:13 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/22 07:06:12 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(StrrchrTest, CharacterFound) {
    const char* str = "hello world";

    // Test case: Character 'o' should point to the second 'o'
    char* result = ft_strrchr(str, 'o');
    ASSERT_NE(result, nullptr); // Ensure result is not NULL
    EXPECT_EQ(result, &str[7]); // Verify the result points to the second 'o'
}

TEST(StrrchrTest, CharacterNotFound) {
    const char* str = "hello world";

    // Test case: Character 'z' is not in the string
    char* result = ft_strrchr(str, 'z');
    EXPECT_EQ(result, nullptr); // Should return NULL
}

TEST(StrrchrTest, NullTerminatorFound) {
    const char* str = "hello world";

    // Test case: Search for null terminator '\0'
    char* result = ft_strrchr(str, '\0');
    ASSERT_NE(result, nullptr); // Ensure result is not NULL
    EXPECT_EQ(result, &str[11]); // Verify result points to the null terminator
}

TEST(StrrchrTest, EmptyString) {
    const char* str = "";

    // Test case: Search in an empty string
    EXPECT_EQ(ft_strrchr(str, 'a'), nullptr); // Any character search should return NULL
}

TEST(StrrchrTest, EmptyStringNullTerminator) {
    const char* str = "";

    // Test case: Search for null terminator '\0' in an empty string
    char* result = ft_strrchr(str, '\0');
    ASSERT_NE(result, nullptr); // Ensure result is not NULL
    EXPECT_EQ(result, str); // Null terminator is at the start of the string
}

TEST(StrrchrTest, MultipleOccurrences) {
    const char* str = "banana";

    // Test case: Search for character 'a', which appears multiple times
    char* result = ft_strrchr(str, 'a');
    ASSERT_NE(result, nullptr); // Ensure result is not NULL
    EXPECT_EQ(result, &str[5]); // Verify result points to the last 'a'
}

TEST(StrrchrTest, FirstCharacterSearch) {
    const char* str = "hello world";

    // Test case: Search for the first character 'h'
    char* result = ft_strrchr(str, 'h');
    ASSERT_NE(result, nullptr); // Ensure result is not NULL
    EXPECT_EQ(result, str); // Verify result points to the first character
}
