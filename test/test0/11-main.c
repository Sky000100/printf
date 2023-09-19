#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function demonstrates the use of functions to print values with
 * zero padding and specified field widths for non-custom conversion specifiers.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int num = 42;
	double dbl = 3.14159;
	unsigned int hex = 0xABC;

	printIntWithZeroPadding(num, 6);
	printDoubleWithZeroPadding(dbl, 10);
	printHexWithZeroPadding(hex, 5);

	return (0);
}
