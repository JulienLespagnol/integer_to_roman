/**
 * @file test_converter.c
 * @author Julien Lespagnol (lespagnolj@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-03-01
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "unity.h"

#include "converter.h"

#define TEST_CASE(...)
#define TEST_RANGE(...)

void test_error_malloc(void)
{
    int integer = 1;
    int result = 0;
    char *roman_s = NULL;

    result = integer_to_roman(integer, &roman_s);
    TEST_ASSERT_NOT_NULL(roman_s);
}

void test_error_return(void)
{
    int integer = 1;
    int expected_result = 0;
    int result = 0;
    char *roman_s = NULL;

    result = integer_to_roman(integer, &roman_s);
    TEST_ASSERT_EQUAL_INT(expected_result, result);
}

TEST_CASE(1, 2)
TEST_CASE(10, 11)
TEST_CASE(21, 22)
TEST_CASE(21, 23)
void test_parametrized(int a, int b)
{
    TEST_ASSERT_EQUAL_INT(b, (a + 1));
}