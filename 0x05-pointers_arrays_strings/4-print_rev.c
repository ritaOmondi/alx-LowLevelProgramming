#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s - pointer string to be reversed
 * Description : The function prints the character of strings
 * in reverse then returns a new line
 */
void print_rev(char *s)
{

	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
