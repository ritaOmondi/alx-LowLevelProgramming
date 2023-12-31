#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Function prins numbers
 * @separator : string to be printed between numbers
 * @n : number of integers passed to the function
 *
 * Return : Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(num, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
