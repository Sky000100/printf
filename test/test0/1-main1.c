#include <stdio.h>
#include "main.h"
/**
 * custom_printf - A custom printf function that handles
 *			custom conversion '%d' and '%i'.
 *
 * @format: The format string.
 * @...: The variable arguments.
 */

int main()
{
	int num = 42;
	custom_printf("Custom Output: %d and %i\n", num, num);
	return (0);
}
