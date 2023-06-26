#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s - pointer string to be reversed
 * Description : The function takes a pointer to a string as a parameter
 *and prints the character of string in reverse order to the standard 
 *output. Starts at the end  of the line to the beginning of the
 *string 
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
