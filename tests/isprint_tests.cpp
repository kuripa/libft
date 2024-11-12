#include <gtest/gtest.h>

extern "C" {
    #include "../libft.h"
}

// Testing printable characters
TEST(IsPrintTest, PrintableChars)
{
    EXPECT_EQ(ft_isprint(' '), 1);        // Space
    EXPECT_EQ(ft_isprint('!'), 1);
    EXPECT_EQ(ft_isprint('~'), 1);        // Tilde (~) final printable
    EXPECT_EQ(ft_isprint('A'), 1);        // Uppercase Alphabetic
    EXPECT_EQ(ft_isprint('z'), 1);        // Lowercase Alphabetic
    EXPECT_EQ(ft_isprint('0'), 1);        // Numeric
    EXPECT_EQ(ft_isprint('9'), 1);
}

// Testing non-printable characters
TEST(IsPrintTest, NonPrintableChars)
{
    EXPECT_EQ(ft_isprint('\t'), 0);       // Tab
    EXPECT_EQ(ft_isprint('\n'), 0);       // Newline
    EXPECT_EQ(ft_isprint('\0'), 0);       // Null character
    EXPECT_EQ(ft_isprint(31), 0);         // ASCII before space
    EXPECT_EQ(ft_isprint(127), 0);        // DEL character, non-printable
}

