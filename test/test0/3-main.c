#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main()
{
	unsigned int num_u = 12345;
	unsigned int num_o = 07654;
	unsigned int num_x = 0xABCD;
	unsigned int num_X = 0xABCD;

	simplified_converter("Custom Output: %u %o %x %X\n",
			num_u, num_o, num_x, num_X);

	return (0);
}
