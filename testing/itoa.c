#include <stdbool.h>
#include "main.h"
/**
 * itoa - func to print ints on string format
 * @n: a int
 * @str: pointer to a buf
 * @base: and int representing its base format
 *
 * Description: individual digits of the given number must be
 * processed and their corresponding characters must be put in the given string
 * Using repeated division by the given base, we get idividual digits from the
 * the least significant to the most significan digit.
 *
 * Return: a int string format
 */
char* itoa(int n, char* str, int base)
{
	int i = 0;
	bool Neg = false;

	/* handle 0 explcity */
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (n < 0 && base == 10)
	{
		Neg = true;
		n = -n;
	}

	while (n != 0)
	{
		int rem = n % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		n = n / base;
	}
	if (Neg)
		str[i++] = '-';

	str[i] = '\0';
	reverse(str, i);

	return (str);
}
