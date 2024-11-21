/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:01:39 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/21 09:04:36 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(MemchrTest, CharacterFound) {
    const char data[] = "hello world";
    size_t len = sizeof(data) - 1; // Exclude null terminator

    // Test case: Character 'o' should be found at position 4
    void* result = ft_memchr(data, 'o', len);
    ASSERT_NE(result, nullptr); // Ensure the result is not NULL
    EXPECT_EQ(result, &data[4]); // Verify the returned pointer matches the expected position
}

TEST(MemchrTest, CharacterNotFound) {
    const char data[] = "hello world";
    size_t len = sizeof(data) - 1; // Exclude null terminator

    // Test case: Character 'z' is not in the string
    void* result = ft_memchr(data, 'z', len);
    EXPECT_EQ(result, nullptr); // Should return NULL
}

TEST(MemchrTest, NullCharacterFound) {
    const char data[] = "hello world";
    size_t len = sizeof(data); // Include null terminator

    // Test case: Null character '\0' should be found at the end
    void* result = ft_memchr(data, '\0', len);
    ASSERT_NE(result, nullptr); // Ensure the result is not NULL
    EXPECT_EQ(result, &data[len - 1]); // Verify it points to the null terminator
}

TEST(MemchrTest, NullInputPointer) {
    // Test case: Input memory block is NULL
    void* result = ft_memchr(nullptr, 'a', 5);
    EXPECT_EQ(result, nullptr); // Should return NULL
}

TEST(MemchrTest, EmptyBlock) {
    const char data[] = "hello world";

    // Test case: Searching in a block of size 0 should return NULL
    void* result = ft_memchr(data, 'h', 0);
    EXPECT_EQ(result, nullptr); // Should return NULL
}

TEST(MemchrTest, MultipleOccurrences) {
    const char data[] = "banana";
    size_t len = sizeof(data) - 1; // Exclude null terminator

    // Test case: Character 'a' appears multiple times; return the first occurrence
    void* result = ft_memchr(data, 'a', len);
    ASSERT_NE(result, nullptr); // Ensure the result is not NULL
    EXPECT_EQ(result, &data[1]); // Verify it points to the first occurrence of 'a'
}
