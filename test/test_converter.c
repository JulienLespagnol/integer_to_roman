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

void test_error_zero(void)
{
    int integer = 0;
    char *roman_s = NULL;

    roman_s = integer_to_roman(integer);
    TEST_ASSERT_NULL(roman_s);
}

void test_error_too_high(void)
{
    int integer = 4000;
    char *roman_s = NULL;

    roman_s = integer_to_roman(integer);
    TEST_ASSERT_NULL(roman_s);
}

void test_error_negative(void)
{
    int integer = -2;
    char *roman_s = NULL;

    roman_s = integer_to_roman(integer);
    TEST_ASSERT_NULL(roman_s);
}

TEST_CASE(1, "I\0")
TEST_CASE(2, "II\0")
TEST_CASE(5, "V\0")
TEST_CASE(10, "X\0")
TEST_CASE(20, "XX\0")
TEST_CASE(50, "L\0")
TEST_CASE(100, "C\0")
TEST_CASE(500, "D\0")
TEST_CASE(1000, "M\0")

TEST_CASE(4, "IV\0")
TEST_CASE(9, "IX\0")
TEST_CASE(40, "XL\0")
TEST_CASE(90, "XC\0")
TEST_CASE(400, "CD\0")
TEST_CASE(900, "CM\0")

// test case set using this converter :
// https://www.calculatorsoup.com/calculators/conversions/roman-numeral-converter.php
TEST_CASE(1562, "MDLXII\0")
TEST_CASE(1234, "MCCXXXIV\0")
TEST_CASE(1987, "MCMLXXXVII\0")
TEST_CASE(114, "CXIV\0")

void test_parametrized(int integer, char *expected_roman_s)
{
    char *roman_s = NULL;
    int expected_roman_s_len = 0;
    expected_roman_s_len = strlen(expected_roman_s);

    roman_s = integer_to_roman(integer);
    TEST_ASSERT_NOT_NULL(roman_s);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(expected_roman_s, roman_s, expected_roman_s_len, sizeof(char));
}