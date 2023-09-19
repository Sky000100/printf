#include <stdio.h>
#include "main.h"

/**
 * printPlusFlag - Print the integer with the '+' flag.
 *
 * @num: The integer value.
 */
void printPlusFlag(int num)
{
	printf("With '+' flag: %+d\n", num);
}

/**
 * printSpaceFlag - Print the integer with the ' ' (space) flag.
 *
 * @num: The integer value.
 */
void printSpaceFlag(int num)
{
	printf("With ' ' (space) flag: % d\n", num);
}

/**
 * printHashFlag - Print the hexadecimal integer with the '#' flag.
 *
 * @hex: The hexadecimal integer value.
 */
void printHashFlag(int hex)
{
	printf("With '#' flag: %#x\n", hex);
}

/**
 * printFloatHashFlag - Print the floating-point number with the '#' flag.
 *
 * @dbl: The double-precision floating-point value.
 */
void printFloatHashFlag(double dbl)
{
	printf("With '#' flag: %#f\n", dbl);
}
