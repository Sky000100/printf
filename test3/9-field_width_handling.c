#include <stdio.h>
#include "main.h"

/**
 * printIntWithFieldWidth - Print the integer with the specified field width.
 *
 * @num: The integer value.
 * @width: The field width.
 */
void printIntWithFieldWidth(int num, int width)
{
	printf("Width %d: |%*d|\n", width, width, num);
}

/**
 * printDoubleWithFieldWidth - Print the double with the specified field width.
 *
 * @dbl: The double value.
 * @width: The field width.
 */
void printDoubleWithFieldWidth(double dbl, int width)
{
	printf("Width %d: |%*f|\n", width, width, dbl);
}

/**
 * printHexWithFieldWidth - Print the hexadecimal integer with the specified
 *								field width.
 *
 * @hex: The hexadecimal integer value.
 * @width: The field width.
 */
void printHexWithFieldWidth(unsigned int hex, int width)
{
	printf("Width %d: |%*x|\n", width, width, hex);
}
