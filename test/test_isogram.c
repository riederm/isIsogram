#include "../src/isogram.h"
#include "vendor/unity.h"
#include <stdlib.h>

// this is a unit test
void test_empty_string(void) { 
    TEST_ASSERT_TRUE(is_isogram("")); 
}

// this is a unit test
void test_short_strings(void) {
    TEST_ASSERT_TRUE(is_isogram("abc"));
    TEST_ASSERT_TRUE(is_isogram("opq"));
}

// this is a unit test
void test_long__strings(void) {
    TEST_ASSERT_TRUE(is_isogram("abcdefghijklmnopqrstuvw"));
}

int main(void) {
    UnityBegin("isIsogram");

    RUN_TEST(test_empty_string);
    RUN_TEST(test_short_strings);
    RUN_TEST(test_long__strings);

    UnityEnd();
    return 0;
}
