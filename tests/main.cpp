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

TEST(IsDigitTest, HandlesNumericChars) {
    EXPECT_EQ(ft_isdigit('0'), 1);
    EXPECT_EQ(ft_isdigit('9'), 1);
    EXPECT_EQ(ft_isdigit('5'), 1);
}

TEST(IsDigitTest, HandlesNonNumericChars) {
    EXPECT_EQ(ft_isdigit('I'), 0);
    EXPECT_EQ(ft_isdigit('@'), 0);
    EXPECT_EQ(ft_isdigit(' '), 0);
}
int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
