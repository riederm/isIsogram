
#include "../src/isogram.h"
#include "vendor/unity.h"
#include <stdlib.h>

void setUp(){}

void tearDown(){}

// this is a unit test
void test_empty_string(void) { 
    TEST_ASSERT_TRUE(is_isogram("")); 
}

int main(void) {
    UnityBegin("isIsogram");

    RUN_TEST(test_empty_string);
    
    UnityEnd();
    return 0;
}
