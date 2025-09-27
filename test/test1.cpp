#include <gtest/gtest.h>
#include "palindrom.h"

TEST(PalindromeTest, EmptyString) {
    EXPECT_TRUE(isPalindrome(""));
}
TEST(PalindromeTest, SingleCharacter) {
    EXPECT_TRUE(isPalindrome("a"));
    EXPECT_TRUE(isPalindrome("X"));
}
TEST(PalindromeTest, SimplePalindromes) {
    EXPECT_TRUE(isPalindrome("radar"));
    EXPECT_TRUE(isPalindrome("level"));
    EXPECT_TRUE(isPalindrome("madam"));
}
TEST(PalindromeTest, SimpleNonPalindromes) {
    EXPECT_FALSE(isPalindrome("hello"));
    EXPECT_FALSE(isPalindrome("world"));
    EXPECT_FALSE(isPalindrome("test"));
}

TEST(PalindromeTest, CaseSensitive) {
    EXPECT_FALSE(isPalindrome("Racecar"));
    EXPECT_TRUE(isPalindrome("racecar"));
}
TEST(PalindromeTest, EvenLength) {
    EXPECT_TRUE(isPalindrome("abba"));
    EXPECT_TRUE(isPalindrome("noon"));
    EXPECT_FALSE(isPalindrome("abab"));
}
TEST(PalindromeTest, OddLength) {
    EXPECT_TRUE(isPalindrome("abcba"));
    EXPECT_TRUE(isPalindrome("madam"));
    EXPECT_FALSE(isPalindrome("abcde"));
}
TEST(PalindromeTest, WithSpaces) {
    EXPECT_FALSE(isPalindrome("race car"));
    EXPECT_FALSE(isPalindrome("a man a plan a canal panama"));
}

TEST(PalindromeTest, Numbers) {
    EXPECT_TRUE(isPalindrome("12321"));
    EXPECT_TRUE(isPalindrome("123321"));
    EXPECT_FALSE(isPalindrome("12345"));
}

TEST(PalindromeTest, SpecialCharacters) {
    EXPECT_TRUE(isPalindrome("!@#@!"));
    EXPECT_TRUE(isPalindrome("a.b.a"));
    EXPECT_FALSE(isPalindrome("a.b.c"));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
