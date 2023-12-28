#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct strFormat
{
	char strFrmt = { "%c", "%d", "%e", "%f", "%g", "%i", "%o", "%s", "%u", "%x" "%%" }
	void (frmtlooup*)(char);
} strFormat_t;

int _putchar(char c);
void _putint(int l);
int _printf(const char *format, ...);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
