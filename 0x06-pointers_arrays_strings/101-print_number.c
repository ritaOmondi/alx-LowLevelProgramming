#include "main.h"
/**
 * print_number :- prints number char
 *@n - integer to be printed
 *Retuns success always
 */

void print_number(int n)
{

	unsigned int x;
	x = n;

	if (n < 0)
	{
	_putchar('_');
	x = -n;
	}
	if (x / 10 != 0)
	{
	print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
