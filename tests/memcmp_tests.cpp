/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:25:38 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/22 07:16:55 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(MemcmpTest, EqualBlocks) {
    const char block1[] = "hello";
    const char block2[] = "hello";

    // Test case: Blocks are identical
    EXPECT_EQ(ft_memcmp(block1, block2, sizeof(block1)), 0);
}

TEST(MemcmpTest, UnequalBlocksFirstDifference) {
    const char block1[] = "hello";
    const char block2[] = "helmo";

    // Test case: First difference at position 3 ('l' vs. 'm')
    EXPECT_LT(ft_memcmp(block1, block2, sizeof(block1)), 0); // block1 < block2
}

TEST(MemcmpTest, UnequalBlocksSecondDifference) {
    const char block1[] = "hezlo";
    const char block2[] = "hello";

    // Test case: First difference at position 2 ('l' vs. 'z')
    EXPECT_GT(ft_memcmp(block1, block2, sizeof(block1)), 0); // block1 > block2
}

TEST(MemcmpTest, ComparePartialBlocks) {
    const char block1[] = "hello";
    const char block2[] = "hello";

    // Test case: Comparing first 3 bytes ("hel" == "hel")
    EXPECT_EQ(ft_memcmp(block1, block2, 3), 0);
}

TEST(MemcmpTest, EmptyBlocks) {
    // Test case: Both blocks are empty
    EXPECT_EQ(ft_memcmp("", "", 0), 0);
}

TEST(MemcmpTest, NullBlocks) {
    // Test case: Null pointers
    EXPECT_EQ(ft_memcmp(nullptr, nullptr, 0), 0);
}

TEST(MemcmpTest, NullVsNonNullBlocks) {
    const char block[] = "data";

    // Test case: Null block compared with non-null block
    EXPECT_EQ(ft_memcmp(nullptr, block, 4), -1);
    EXPECT_EQ(ft_memcmp(block, nullptr, 4), -1);

    // Test case: Both blocks are null with size 0 (should succeed)
    EXPECT_NO_THROW(ft_memcmp(nullptr, nullptr, 0));

    // Test case: Both blocks are null with non-zero size (should throw)
    EXPECT_EQ(ft_memcmp(nullptr, nullptr, 4), -1);
}

TEST(MemcmpTest, UnequalLengths) {
    const char block1[] = "hello";
    const char block2[] = "hello world";

    // Test case: Compare only the first 5 bytes
    EXPECT_EQ(ft_memcmp(block1, block2, 5), 0);

    // Test case: Compare beyond the length of block1
    EXPECT_LT(ft_memcmp(block1, block2, 10), 0); // block1 < block2 because block1 has fewer bytes
}
