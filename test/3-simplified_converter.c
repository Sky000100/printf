#include <stdio.h>
#include "main.h"

/**
 * simplified_converter - Perform simplified conversions and print results.
 *
 * @u_value: The unsigned decimal integer value.
 * @o_value: The octal integer value.
 * @x_value: The hexadecimal integer value (lowercase).
 * @X_value: The hexadecimal integer value (uppercase).
 */
void simplified_converter(unsigned int u_value, unsigned int o_value,
			unsigned int x_value, unsigned int X_value)
{

	printf("u_value: %u\n", u_value);
	printf("o_value: %o\n", o_value);
	printf("x_value: %x\n", x_value);
	printf("X_value: %X\n", X_value);

	return (0);
}

