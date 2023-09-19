#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function demonstrates the use of functions to print values with
 * specified field widths for non-custom conversion specifiers.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int num = 42;
	double dbl = 3.14159;
	unsigned int hex = 0xABC;

	printIntWithFieldWidth(num, 6);
	printDoubleWithFieldWidth(dbl, 8);
	printHexWithFieldWidth(hex, 5);

	return (0);
}

