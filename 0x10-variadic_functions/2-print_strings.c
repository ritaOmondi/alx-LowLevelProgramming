#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
/**
 * print_strings - Function that prints strings
 * @separator : string to be printed between strings
 * @n : number of strings passed to the functions
 *
 * Return : Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(string, char *);
	if (str == NULL)
	printf("Nill");
	else
	printf("%s", str);
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
