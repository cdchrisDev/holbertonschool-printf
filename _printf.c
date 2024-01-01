#include "main.h"
/*
 * _printf - a noob duplicate of the printf std function
 * @format: the string formated guide
 * Return: the formated string with its values
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	char *str;
	va_list arg;
	va_start(arg, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%');
				write(1, &format, 1);
			else if (format != NULL)
			{
				void spcs = va_arg(arg, void);
				get_percent(*format, spcs);
			}
			else
				return (NULL);
		}
		else
			write(1, &format, 1);

		format++;
	}
	return (i);
}
