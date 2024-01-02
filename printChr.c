#include "main.h"
/**
 * printChar - a function to print chars
 * @c: a char
 * Return: char or string
 */
int printChr(char c)
{
	return (write(1, &c, 1));
}
/**
 * printStr - print a string
 * @str: a string
 * Return: a string
 */
int printStr(char *chars)
{
	int len = 0;

	while (*chars != '\0')
	{
		printChr(*chars);
		chars++;
		len++;
	}
	return (len);
}
