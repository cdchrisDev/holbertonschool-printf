#include "main.h"
/**
 * printInt - print a int according to its format
 * @n: a int
 * 
 *
 */
char *printInt(char *spcfier, int n);
{
	if (spcfier == 'd' || spcfier == 'i')
	{
		char *str = "";
		write(1, atoi(n, str, 10), sizeof(int));
	}
}
