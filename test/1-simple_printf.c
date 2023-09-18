#include <stdio.h>
#include "main.h"

/**
 * simple_printf - A simplified printf-like function for %d and %i specifiers.
 * @format: The format string.
 * @...: Variable number of integer arguments.
 */
void simple_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int value = va_arg(args, int);

			printf("%d", value);
			format += 2;
		}
		else
		{
			putchar(*format);
			format++;
		}
	}

	va_end(args);
}
