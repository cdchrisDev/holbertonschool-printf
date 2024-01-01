#include "main.h"
/**
 * get_percent - a func to get the spc %
 * @spc: string specifier
 * Return: the func
 */
int (*Fsp(char *spcfier)(void arg_spc))
{
	spc_t specs[] = {
	{"d", printInt},
	{"i", printInt},
	{"u", unsigPrnt},
	{"o", printInt},
	{"x", printInt},
	{"X", printInt},
	{"c", printChr},
	{"s", printChr},
	{"p", unsigPrnt},
	{"r", unsigPrnt},
	{NULL, NULL}
	};

	int i = 0;
	while (specs[i].s != NULL)
	{
		if (*specs[i].s == *format && *format != '\0')
			return (specs[i].Fspc);

		i++;
	}
	return (0);
}
