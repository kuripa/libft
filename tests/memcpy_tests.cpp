/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 04:40:46 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 04:48:10 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <gtest/gtest.h>
#include <cstring>

extern "C" {
    #include "../libft.h"
}

TEST(MemcpyTest, BasicCopy) {
    char src[] = "Hello, World!";
    char dest[20];
    ft_memcpy(dest, src, sizeof(src));
    EXPECT_STREQ(dest, src);
}

TEST(MemcpyTest, ZeroLength) {
    char src[] = "Hello, World!";
    char dest[20] = "Unchanged Data"; // Initialize with known data
    ft_memcpy(dest, src, 0);
    EXPECT_STREQ(dest, "Unchanged Data"); // Expect no change in destination
}

TEST(MemcpyTest, OverlappingRegions_UndefinedBehavior) {
    char src[] = "Overlapping";
    ft_memcpy(src + 5, src, 5); // Deliberate UB
    // Do not expect any specific result, as the behavior is undefined
}

TEST(MemcpyTest, DifferentDataTypes) {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    ft_memcpy(dest, src, sizeof(src));
    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(dest[i], src[i]);
    }
}

