/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_one_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_mixed_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABCDdcba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_special_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("!@#$%^&*()()*&^%$#@!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABCD%rAcEcAr%dcba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_spaces_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("  ");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, asc_sort_desc)
{
    Practice obj;
		int one = 1, two = 2, three = 3;
    bool actual = obj.sortDescending(one,two,three);
    ASSERT_GE(one, two);
		ASSERT_GE(two, three);
}

TEST(PracticeTest, same_sort_desc)
{
    Practice obj;
		int one = 1, two = 1, three = 1;
    bool actual = obj.sortDescending(one,two,three);
    ASSERT_GE(one, two);
		ASSERT_GE(two, three);
}

TEST(PracticeTest, desc_sort_desc)
{
    Practice obj;
		int one = 3, two = 2, three = 1;
    bool actual = obj.sortDescending(one,two,three);
    ASSERT_GE(one, two);
		ASSERT_GE(two, three);
}

TEST(PracticeTest, neg_sort_desc)
{
    Practice obj;
		int one = -3, two = 2, three = 1;
    bool actual = obj.sortDescending(one,two,three);
    ASSERT_GE(one, two);
		ASSERT_GE(two, three);
}
