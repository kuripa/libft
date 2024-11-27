/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 07:24:52 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/27 07:29:13 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

// Test fixture class (optional, for organization)
class StrlcpyTest : public ::testing::Test {
protected:
    char buffer[20]; // A buffer for testing purposes

    // Setup before each test
    void SetUp() override {
        memset(buffer, 'X', sizeof(buffer)); // Fill with dummy data
    }
};

// Test: Copying a full string into a large enough buffer
TEST_F(StrlcpyTest, FullCopy) {
    const char *src = "Hello";
    size_t result = ft_strlcpy(buffer, src, sizeof(buffer));

    EXPECT_STREQ(buffer, "Hello");        // Verify the buffer contents
    EXPECT_EQ(result, strlen(src));      // Verify the returned length
}

// Test: Truncating the string when the buffer is too small
TEST_F(StrlcpyTest, TruncatedCopy) {
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(buffer, src, 6); // Only room for 5 chars + '\0'

    EXPECT_STREQ(buffer, "Hello");       // Verify the buffer contents
    EXPECT_EQ(result, strlen(src));      // Verify the returned length
}

// Test: Empty source string
TEST_F(StrlcpyTest, EmptySource) {
    const char *src = "";
    size_t result = ft_strlcpy(buffer, src, sizeof(buffer));

    EXPECT_STREQ(buffer, "");            // Verify the buffer contents
    EXPECT_EQ(result, 0);                // Verify the returned length
}

// Test: Zero-sized destination buffer
TEST_F(StrlcpyTest, ZeroSizeBuffer) {
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(buffer, src, 0); // No room for even '\0'

    EXPECT_EQ(result, strlen(src));      // Verify the returned length
    EXPECT_EQ(buffer[0], 'X');           // Ensure buffer is unchanged
}

// Test: Destination buffer exactly fits the string
TEST_F(StrlcpyTest, ExactSizeBuffer) {
    const char *src = "Hello";
    size_t result = ft_strlcpy(buffer, src, 6); // 5 chars + '\0'

    EXPECT_STREQ(buffer, "Hello");       // Verify the buffer contents
    EXPECT_EQ(result, strlen(src));      // Verify the returned length
}

// Test: Source string is larger than the buffer size
TEST_F(StrlcpyTest, SourceLargerThanBuffer) {
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(buffer, src, 4); // Only room for 3 chars + '\0'

    EXPECT_STREQ(buffer, "Hel");         // Verify the buffer contents
    EXPECT_EQ(result, strlen(src));      // Verify the returned length
}

// Test: Large source and destination buffers
TEST_F(StrlcpyTest, LargeSourceAndDestination) {
    const char *src = "This is a test of a long string!";
    size_t result = ft_strlcpy(buffer, src, sizeof(buffer)); // buffer size is 20

    EXPECT_STREQ(buffer, "This is a test of a");  // Truncated result
    EXPECT_EQ(result, strlen(src));               // Verify the returned length
}

// Test: Source is NULL (invalid usage case)
TEST(StrlcpyEdgeCases, NullSource) {
    char buffer[20];
    EXPECT_EXIT(ft_strlcpy(buffer, nullptr, sizeof(buffer)),
                ::testing::KilledBySignal(SIGSEGV),
                ".*"); // Expect the program to crash
}

// Test: Destination is NULL (invalid usage case)
TEST(StrlcpyEdgeCases, NullDestination) {
    const char *src = "Hello";
    EXPECT_EXIT(ft_strlcpy(nullptr, src, 10),
                ::testing::KilledBySignal(SIGSEGV),
                ".*"); // Expect the program to crash
}
