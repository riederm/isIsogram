#include "vendor/unity.h"
#include "../src/isogram.h"
#include "vendor/unity_internals.h"
#include <stdlib.h>

//äquivalenzKlassen
/*
    - empty-string
    - short strings
    - long strings
    - upper case / lower case
    - strings with special characters (!?%)
    - strings with numbers (digits 0-9)
*/


//this is a unit test
void test_empty_string(void)
{
   TEST_ASSERT_TRUE(is_isogram(""));
}

void test_short_strings() {
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("a"));
    TEST_ASSERT_TRUE(is_isogram("b"));
    TEST_ASSERT_TRUE(is_isogram("c"));

    TEST_ASSERT_TRUE(is_isogram("xyz"));
    TEST_ASSERT_TRUE(is_isogram("abc"));
    TEST_ASSERT_TRUE(is_isogram("def"));

   
    TEST_ASSERT_TRUE(is_isogram("aa"));
    TEST_ASSERT_TRUE(is_isogram("bb"));
    TEST_ASSERT_TRUE(is_isogram("cc"));

     //negative tests
    TEST_ASSERT_TRUE(is_isogram("aab"));
    TEST_ASSERT_TRUE(is_isogram("bbc"));
}

void test_long_strings() {
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("Dialogschwerpunkt"));

    //negative tests
    TEST_ASSERT_FALSE(is_isogram("Dialogschwerpunkte"));
}

void test_upper_case_strings() {
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("DIALOGSCHWERPUNKT"));
    TEST_ASSERT_TRUE(is_isogram("ABC"));

    //negative tests
    TEST_ASSERT_FALSE(is_isogram("DIALOGSCHWERPUNKTE"));
    TEST_ASSERT_FALSE(is_isogram("DEE"));
}

void test_lower_case_strings() {
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("dialogschwerpunkt"));

    //negative tests
    TEST_ASSERT_FALSE(is_isogram("dialogschwerpunkte"));
}

void test_mixed_case_strings() {
     //positive tests
    TEST_ASSERT_TRUE(is_isogram("DIaLOGScHWERpUNkT"));
    TEST_ASSERT_TRUE(is_isogram("AbC"));

    //negative tests
    TEST_ASSERT_FALSE(is_isogram("DIALoGSCHWerPUNKTE"));
    TEST_ASSERT_FALSE(is_isogram("DEe"));
}

void test_special_characters_strings(){
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("!?%"));
    TEST_ASSERT_TRUE(is_isogram("!??$"));
    TEST_ASSERT_TRUE(is_isogram("abc??"));
    TEST_ASSERT_TRUE(is_isogram("aabbcc??"));

    //negative tests
    TEST_ASSERT_FALSE(is_isogram("!??$a$ab"));
}

void test_digit_strings() {
    //positive tests
    TEST_ASSERT_TRUE(is_isogram("12345"));
    //negative tests
    TEST_ASSERT_FALSE(is_isogram("123451"));
}

//TODO#1 special characters are ignored is_isogram("abc!!")

//TODO#2 extend definition of isIsogram to extended definition
//          any number of occurences is fine, as long as its the same number
//          e.g.: is_isogram

int main(void)
{
   UnityBegin("isIsogram");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_short_strings);
   RUN_TEST(test_long_strings);
   RUN_TEST(test_upper_case_strings);
   RUN_TEST(test_lower_case_strings);
   RUN_TEST(test_mixed_case_strings);
   RUN_TEST(test_special_characters_strings);
   RUN_TEST(test_digit_strings);

   UnityEnd();
   return 0;
}