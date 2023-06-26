#include "main.h"
/**
 * puts_half - prints half of a string
 * @str - pointer to the string
 *
 * Description: The function takes the pointer string as a parameter
 * and prints the second half of a string followed 
 * by a new line.
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
	b = (a - 1 ) / 2;
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
