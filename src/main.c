/**
 * @file main.c
 * @author Julien Lespagnol (lespagnolj@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-03-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "converter.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int integer = 0;
    char *roman_s = NULL;

    if (integer_to_roman(integer, &roman_s) == 0)
    {
        printf(roman_s);
    }
    else
    {
        printf("Error during conversion");
    }
}
