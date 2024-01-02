#include "main.h"
/**
 * printInt - a function to print ints
 * @n: int
 * @s: bf output
 * @base: the base
 * Return: a int on string format
 */
int printInt(long n, char *s, int base)
{
        return (write(1, itoa(n, s, base), sizeof(int)));
}
/**
 * printDig - print digits
 * @n: number
 * @base: the base
 * Return: a n
 */
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
