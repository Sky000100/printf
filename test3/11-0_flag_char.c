#include <stdio.h>
#include "main.h"

/**
 * printIntWithZeroPadding - Print the integer with zero padding
 *				and the specified field width.
 *
 * @num: The integer value.
 * @width: The field width.
 */
void printIntWithZeroPadding(int num, int width)
{
	printf("Zero-padded width %d: |%0*d|\n", width, width, num);
}

/**
 * printDoubleWithZeroPadding - Print the double with zero padding
 *				and the specified field width.
 *
 * @dbl: The double value.
 * @width: The field width.
 */
void printDoubleWithZeroPadding(double dbl, int width)
{
	printf("Zero-padded width %d: |%0*.*f|\n", width, width, width - 2, dbl);
}

/**
 * printHexWithZeroPadding - Print the hexadecimal integer with zero padding
 *					and the specified field width.
 *
 * @hex: The hexadecimal integer value.
 * @width: The field width.
 */
void printHexWithZeroPadding(unsigned int hex, int width)
{
	printf("Zero-padded width %d: |%0*x|\n", width, width, hex);
}
