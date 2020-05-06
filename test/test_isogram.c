#include "vendor/unity.h"
#include "../src/isogram.h"
#include <stdlib.h>

void test_empty_string(void)
{
   TEST_ASSERT_TRUE(is_isogram(""));
}
void test_short_isogram_word(void)
{
   TEST_ASSERT_TRUE(is_isogram("Auto"));
}
void butter_is_no_isogram(void)
{
   TEST_ASSERT_FALSE(is_isogram("butter"));
}
void test_long_isogram(void)
{
   TEST_ASSERT_TRUE(is_isogram("Dialogschwerpunkt"));
}
void test_long_non_isogram(void)
{
   TEST_ASSERT_FALSE(is_isogram("abcdefghjiklmnopqrstuvwxyza"));
}

void upperCase_and_LowerCase_should_count_as_same_character(void) {
    TEST_ASSERT_FALSE(is_isogram("Aal"));
    TEST_ASSERT_FALSE(is_isogram("aAl"));
}

void spaces_should_not_count(void) {
    TEST_ASSERT_TRUE(is_isogram("Dialog  schwerpunkt"));
}

int main(void)
{
   UnityBegin("isIsogram");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_short_isogram_word);
   RUN_TEST(butter_is_no_isogram);
   RUN_TEST(test_long_isogram);
   RUN_TEST(test_long_non_isogram);

   RUN_TEST(upperCase_and_LowerCase_should_count_as_same_character);
    RUN_TEST(spaces_should_not_count);
   UnityEnd();
   return 0;
}
