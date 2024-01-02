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
int printInt(long n, char *s, int base)
{
	return (write(1, itoa(n, s, base), sizeof(int)));
}

int printChr(char c)
{
	return (write(1, &c, 1));
}

int printStr(char *chars)
{
	int len = 0;

	while (*chars != '\0')
	{
		printChr(*chars);
		chars++;
		len++;
	}
}

int printDig(long n, int base)
{
        int i;
        char *Sym;

        Sym = "0123456789abcdef";
        if (n < 0)
        {
                write(1, "-", 1);
                return (printDig(-n, base) + 1);
        }
        else if (n < base)
                return (printChr(Sym[n]));
        else
        {
                i = printDig(n / base, base);
                return i + printDig(n & base, base);
        }
}

int get_percent(char spcfier, va_list ap)
{
	int i = 0;
	char str;

	if (spcfier == 'c') /* char */
		i += printChr(va_arg(ap, int));
	else if (spcfier == 's') /* string */
		i += printStr(va_arg(ap, char *));
	else if (spcfier == 'd' || spcfier == 'i')
	{	/* integer */ 
		char *s = &str;

		i += printInt(va_arg(ap, int), s, 10);
	}
	else if (spcfier == 'x' || spcfier == 'X')
	{	/* HEX */ 
		char *s = &str;

		i += printDig(va_arg(ap, unsigned int), 16);
	}
	else if (spcfier == 'o' || spcfier == 'O')
	{
		/* octal */
		char *s = &str;

		i += printDig(va_arg(ap, unsigned int), 8);
	}
	else
		i += write(1, &spcfier, 1);
	return (i);
}

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

#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /*_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
