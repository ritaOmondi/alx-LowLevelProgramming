#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the second half of the string to the standard output. If the
 * string has an odd length, it prints the middle character and the remaining
 * characters in the second half.
 */
void puts_half(char *str)
{

	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	b = (a - 1) / 2;
	b += 1;
	}
	else
	{
	b = a / 2;
	}
	for (; b < a; b++)
	{
	_putchar(str[b]);
	}
	_putchar('\n');



}
