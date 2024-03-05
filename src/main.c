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
    int error_code = 0;
    int integer = 0;
    char *roman_s = NULL;

    printf("Enter an integer:\n");
    error_code = scanf("%d", &integer);

    if (error_code <= 0)
    {
        printf("Error : enter an integer.");
    }
    else
    {
        roman_s = integer_to_roman(integer);

        if (roman_s == NULL)
        {
            printf("Error : error during conversion, probably bad integer (0 or > 3999)");
        }
        else
        {
            printf(roman_s);
        }
    }
}
