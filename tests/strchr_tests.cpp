/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:41:44 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/11/13 20:41:45 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

TEST(ft_strchr_Test, NullPointer) {
    EXPECT_EQ(ft_strchr(NULL, 'a'), nullptr);
}

TEST(ft_strchr_Test, CharacterFound) {
    const char *str = "hello";
    EXPECT_EQ(ft_strchr(str, 'e'), str + 1);
    EXPECT_EQ(ft_strchr(str, 'o'), str + 4);
}

TEST(ft_strchr_Test, CharacterNotFound) {
    const char *str = "hello";
    EXPECT_EQ(ft_strchr(str, 'x'), nullptr);
}

TEST(ft_strchr_Test, NullTerminator) {
    const char *str = "hello";
    EXPECT_EQ(ft_strchr(str, '\0'), str + 5);
}

TEST(ft_strchr_Test, EmptyString) {
    const char *str = "";
    EXPECT_EQ(ft_strchr(str, 'a'), nullptr);
    EXPECT_EQ(ft_strchr(str, '\0'), str);
}

