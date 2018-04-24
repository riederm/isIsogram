#include "vendor/unity.h"
#include "../src/isogram.h"
#include <stdlib.h>

void test_single_characters(void)
{
   TEST_ASSERT_TRUE(is_isogram("a"));
   TEST_ASSERT_TRUE(is_isogram("B"));
   TEST_ASSERT_TRUE(is_isogram("z"));
}

int main(void)
{
   UnityBegin("test/test_isogram.c");

   RUN_TEST(test_single_characters);

   UnityEnd();

   return 0;
}
