#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * int my_pritnf - a replicate of _printf
 * @format: a formated string
 * Return: 
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			i += get_percent(*(++format), ap);
		else
			i += write(1, format, 1);
		++format;

	}
	va_end(ap);
	return (i);
}
