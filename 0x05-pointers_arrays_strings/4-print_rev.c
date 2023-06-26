#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the characters of the string in reverse order to the standard
 * output. It starts from the end of the string and continues printing until
 * it reaches the beginning of the string.
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
