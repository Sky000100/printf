#include <stdio.h>
#include "main.h"

/**
 * custom_printf - A custom printf function that handles
 *				custom conversion 'r'.
 *
 * @format: The format string.
 * @...: The variable arguments.
 */
void custom_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'r')
		{
			format += 2;
			const char *str = va_arg(args, const char *);

			print_reversed_string(str);
		}
		else
		{
			putchar(*format);
			format++;
		}
	}

	va_end(args);
}

/**
 * print_reversed_string - Print a reversed string.
 *
 * @str: The string to be reversed and printed.
 */
void print_reversed_string(const char *str)
{
	int length = strlen(str);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}
}
