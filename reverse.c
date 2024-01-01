#include "main.h"
/**
 * reverse - a utility func to reverse a string
 * @str: a string
 * @length: the length of the string
 * Return: a reversed string
 */
void reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}
