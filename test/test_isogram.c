#include "vendor/unity.h"
#include "../src/isogram.h"
#include "vendor/unity_internals.h"
#include <stdlib.h>
//this is a unit test
void test_empty_string(void)
{
    //assert: erwartungshaltung
   TEST_ASSERT_TRUE(is_isogram(""));
}

void test_aa_is_no_isogram(){
    bool result = is_isogram("aa");
    TEST_ASSERT_FALSE(result);
}

void test_abc_is_an_isogram(){
    bool result = is_isogram("abc");
    TEST_ASSERT_TRUE(result);
}

void test_long_isograms(){
    TEST_ASSERT_TRUE(is_isogram("abcdefghijklmnopqrstuvwxyz"));
    TEST_ASSERT_TRUE(is_isogram("Dialogschwerpunkt"));
    TEST_ASSERT_TRUE(is_isogram("Pokalbeschriftung"));
   
}

void test_long_non_isograms(){
    TEST_ASSERT_FALSE(is_isogram("abcdefghijklmnopqrstuuvwxyz"));
    TEST_ASSERT_FALSE(is_isogram("Pokalbescchriftung"));
}

void test_upperLowerCase_should_not_matter(){
    TEST_ASSERT_FALSE(is_isogram("abcdefghiIjklmnopqrstuvwxyz"));
    TEST_ASSERT_FALSE(is_isogram("Dialogdschwerpunkt"));
}

void test_spaces_should_not_be_counted(){
    TEST_ASSERT_TRUE(is_isogram("abc def ghi"));
}

int main(void)
{
   UnityBegin("isIsogram");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_aa_is_no_isogram);
   RUN_TEST(test_abc_is_an_isogram);
   RUN_TEST(test_long_isograms);
   RUN_TEST(test_long_non_isograms);
   RUN_TEST(test_upperLowerCase_should_not_matter);
   RUN_TEST(test_spaces_should_not_be_counted);

   UnityEnd();
   return 0;
}
