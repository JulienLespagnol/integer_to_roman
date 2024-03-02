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

    printf("Enter an integer:\n");
    scanf("%d", &integer);
    roman_s = integer_to_roman(integer);

    if (roman_s != NULL)
    {
        printf(roman_s);
    }
    else
    {
        printf("Error during conversion");
    }
}
