#include "main.h"
/**
 * printChr - a function to print chars
 * @c: a char
 * Return: int
 */
int printChr(char c)
{
        return (write(1, &c, 1));
}
/**
 * printStr - a function to print strings
 * @chars: a string (an array of chars)
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
}
