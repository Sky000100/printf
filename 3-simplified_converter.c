#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * simplified_converter - Perform simplified conversions and print results.
 *
 * @format: The format string containing conversion specifiers.
 * @...: The variable arguments to be formatted and printed.
 */

void simplified_converter(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'u' || *(format + 1) == 'o' ||
					*(format + 1) == 'x' || *(format + 1) == 'X'))
		{
			unsigned int value = va_arg(args, unsigned int);
			char buffer[32];
			int len;

			if (*(format + 1) == 'o')
				len = snprintf(buffer, sizeof(buffer), "%o", value);
			else if (*(format + 1) == 'x')
				len = snprintf(buffer, sizeof(buffer), "%x", value);
			else if (*(format + 1) == 'X')
				len = snprintf(buffer, sizeof(buffer), "%X", value);
			else
				len = snprintf(buffer, sizeof(buffer), "%u", value);

			write(STDOUT_FILENO, buffer, len);
			format += 2;
		}
		else
		{
			char ch = *format;

			write(STDOUT_FILENO, &ch, 1);
			format++;
		}
	}

	va_end(args);
}
