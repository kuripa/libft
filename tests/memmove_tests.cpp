/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_tests.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 05:10:00 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/19 05:45:45 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>
#include <cstring> 

extern "C" {
    #include "../libft.h"
}

TEST(MemmoveTest, NonOverlappingRegions) {
    char src[] = "Hello, World!";
    char dest[20];
    ft_memmove(dest, src, 13);
    EXPECT_STREQ(dest, "Hello, World!");
}

TEST(MemmoveTest, OverlappingRegionsDestBeforeSrc) {
    char src[] = "Hello, World!";
    char src_ref[] = "Hello, World!";
    ft_memmove(src + 6, src, 5); 
    memmove(src_ref + 6, src_ref, 5); 
    EXPECT_STREQ(src, src_ref);
}

TEST(MemmoveTest, OverlappingRegionsSrcBeforeDest) {
    char src[] = "Overlapping";
    char src_ref[] = "Overlapping";
    ft_memmove(src + 5, src, 5);
    memmove(src_ref + 5, src_ref, 5);
    EXPECT_STREQ(src,src_ref);
}

TEST(MemmoveTest, ZeroLengthCopy) {
    char src[] = "Hello, World!";
    char dest[20] = {0};
    
    ft_memmove(dest, src, 0);

    EXPECT_EQ(dest[0], '\0');
}

TEST(MemmoveTest, NullSourcePointer) {
    char dest[20];
    EXPECT_EQ(ft_memmove(dest, NULL, 10), nullptr);
}

TEST(MemmoveTest, NullDestPointer) {
    const char *src = "Hello, World!";
    EXPECT_EQ(ft_memmove(NULL, src, 10), nullptr);
}

