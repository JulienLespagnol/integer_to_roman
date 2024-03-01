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

void test_error_malloc(void)
{
    int integer = 0;
    int result = 0;
    char *roman_s = NULL;

    result = integer_to_roman(integer, &roman_s);
    TEST_ASSERT_NOT_NULL(roman_s);
}