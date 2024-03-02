/**
 * @brief
 *
 * @param integer
 * @param roman_s
 * @return int
 */

#include "converter.h"

#include <stdlib.h>

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