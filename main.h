#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int get_percent(char spcfier, va_list ap);
char* itoa(int n, char* str, int base);
int printChr(char c);
int printStr(char *chars);
int printInt(long n, char *s, int base);
int printDig(long n, int base);
void reverse(char str[], int length);

#endif
