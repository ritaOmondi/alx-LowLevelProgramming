#include "main.h"
/**
 * jack_bauers: Prints every minute of his day
 * Return: 
 */

void jack_bauer(void)
{

	int x, y, z, g;
	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
	{
	for (z = 0; z <= 5; z++)
	{
	for (g = 0; g <= 9; g++)
	{
	_putchar (x + '0');
	_putchar (y + '0');
	_putchar (58);
	_putchar (z + '0');
	_putchar (g + '0');
	_putchar ('\n');
	}
	}
	}
	}
	}
}
