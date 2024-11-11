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
