#include <stdio.h>
#include "main.h"

/**
 * custom_printf - A custom printf function that handles custom conversion 'S'.
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
		if (*format == '%' && *(format + 1) == 'S')
		{
			format += 2;
			const char *str = va_arg(args, const char *);

			while (*str)
			{
				if (*str < 32 || *str >= 127)
				{
					printf("\\x%02X", (unsigned char)*str);
				}
				else
				{
					putchar(*str);
				}
				str++;
			}
		}
		else
		{
			putchar(*format);
			format++;
		}
	}
}

