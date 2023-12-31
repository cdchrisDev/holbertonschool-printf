#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct spc
{
	char *s;
	int (*Fspc)(va_list arg);
} spc_t;

int _printf(const char *format, ...);
char* itoa(int n, char* buffer, int base);
void reverse(char str[], int length);

#endif
