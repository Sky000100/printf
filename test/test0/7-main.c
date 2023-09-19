#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function demonstrates the use of functions to print values
 * with different flag characters for non-custom conversion specifiers.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int num = 42;
	double dbl = 3.14159;

	printPlusFlag(num);
	printSpaceFlag(num);
	printHashFlag(num);
	printFloatHashFlag(dbl);

	return (0);
}

