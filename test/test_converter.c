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
#include "string.h"
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

TEST_CASE(1, "I\n")
TEST_CASE(2, "II\n")
TEST_CASE(5, "V\n")
TEST_CASE(10, "X\n")
TEST_CASE(20, "XX\n")
TEST_CASE(50, "L\n")
TEST_CASE(100, "C\n")
TEST_CASE(500, "D\n")
TEST_CASE(1000, "M\n")
TEST_CASE(1562, "MDLXII\n")

TEST_CASE(4, "IV\n")
TEST_CASE(9, "IV\n")
TEST_CASE(40, "XL\n")
TEST_CASE(90, "XC\n")
TEST_CASE(400, "CD\n")
TEST_CASE(900, "CM\n")

void test_parametrized(int integer, char *expected_roman_s)
{
    int result = 0;
    int expected_result = 0;
    char *roman_s = NULL;
    int expected_roman_s_len = 0;

    expected_roman_s_len = strlen(expected_roman_s);

    result = integer_to_roman(integer, &roman_s);
    TEST_ASSERT_NOT_NULL(roman_s);
    TEST_ASSERT_EQUAL_INT(expected_result, result);
    TEST_ASSERT_EQUAL_STRING_ARRAY(expected_roman_s, roman_s, expected_roman_s_len);
}