/**
 * @file converter.c
 * @author Julien Lespagnol (lespagnolj@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "converter.h"

#include <stdlib.h>

/**
 * TODO : refactor to only use two fonctions to add roman character like this instead of duplicated code :
 * char * add_simple_character(char *roman_s, char char c, int numeral_value, int *integer, int *index)
 * char * add_double_character(char *roman_s, c1, char c2, int numeral_value, int *integer, int *index)
 */

/**
 * TODO : use a struct array to describe the integer/roman numeral conversion ? :
 * struct
 * {
 *      bool is_double;
 *      int numeral_value;
 *      char c1;
 *      char c2;
 * }
 * [] = {
 *      {false, 1000, "M", "\0"},
 *      {true, 900, "C", "M"},
 * etc...
 * };
 * And use it inside a single block of code instead of if/else if/else if etc...
 *
 */

/**
 * @brief Convert an integer into a roman numeral value
 *
 * @param integer : integer to convert
 * @return char* : roman numeral value if no error, else return NULL
 */
char *integer_to_roman(int integer)
{
    int index = 0;
    char *roman_s = NULL;

    // we can't write 0 with roman numeral and the maximum with "standard" characters is 3999
    if ((integer > 0) && (integer <= 3999))
    {
        do
        {
            // M = 1000
            if (integer >= 1000)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'M';

                    // substract from integer the added value in roman
                    integer -= 1000;
                }
            }
            // CM = 900
            else if (integer >= 900)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'C';
                    roman_s[index++] = 'M';

                    // substract from integer the added value in roman
                    integer -= 900;
                }
            }
            // D = 500
            else if (integer >= 500)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'D';

                    // substract from integer the added value in roman
                    integer -= 500;
                }
            }
            // CD = 400
            else if (integer >= 400)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'C';
                    roman_s[index++] = 'D';

                    // substract from integer the added value in roman
                    integer -= 400;
                }
            }
            // C = 100
            else if (integer >= 100)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'C';

                    // substract from integer the added value in roman
                    integer -= 100;
                }
            }
            // XC = 90
            else if (integer >= 90)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'X';
                    roman_s[index++] = 'C';

                    // substract from integer the added value in roman
                    integer -= 90;
                }
            }
            // L = 50
            else if (integer >= 50)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'L';

                    // substract from integer the added value in roman
                    integer -= 50;
                }
            }
            // XL =40
            else if (integer >= 40)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'X';
                    roman_s[index++] = 'L';

                    // substract from integer the added value in roman
                    integer -= 40;
                }
            }
            // X = 10
            else if (integer >= 10)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'X';

                    // substract from integer the added value in roman
                    integer -= 10;
                }
            }
            // IX = 9
            else if (integer >= 9)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'I';
                    roman_s[index++] = 'X';

                    // substract from integer the added value in roman
                    integer -= 9;
                }
            }
            // V = 5
            else if (integer >= 5)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'V';

                    // substract from integer the added value in roman
                    integer -= 5;
                }
            }
            // IV = 4
            else if (integer >= 4)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 2)));
                if (roman_s != NULL)
                {
                    // set new characters
                    roman_s[index++] = 'I';
                    roman_s[index++] = 'V';

                    // substract from integer the added value in roman
                    integer -= 4;
                }
            }
            // I = 1
            else if (integer >= 1)
            {
                // extend char array
                roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
                if (roman_s != NULL)
                {
                    // set new character
                    roman_s[index++] = 'I';

                    // substract from integer the added value in roman
                    integer -= 1;
                }
            }

        } while ((integer != 0) && (roman_s != NULL));

        if (roman_s != NULL)
        {
            // add NULL character at end of ligne
            roman_s = realloc(roman_s, (sizeof(char) * (index + 1)));
            roman_s[index++] = '\0';
        }
    }

    return roman_s;
}