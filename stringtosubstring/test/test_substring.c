#include "unity.h"

#include "substring.h"



void setUp(){}



void tearDown(){}



void test_lowercasesubstrings(void)

{

    TEST_ASSERT_EQUAL_STRING("hello world",substring(hello_world));

    TEST_ASSERT_EQUAL_STRING("welcome to ltts",substring(welcome_to_ltts));

    TEST_ASSERT_EQUAL_STRING("hello programming",substring(hello_programming));



}


void test_uppercasesubstrings(void)

{

    TEST_ASSERT_EQUAL_STRING("HELLO WORLD",substring(HELLO_WORLD));

    TEST_ASSERT_EQUAL_STRING("WELCOME TO LTTS",stringpgm(WELCOME TO LTTS));

}

int test_main(void)

{

    UNITY_BEGIN();



    RUN_TEST(test_lowercasesubstrings);

    RUN_TEST(test_uppercasesubstrings);

    return UNITY_END();

}
