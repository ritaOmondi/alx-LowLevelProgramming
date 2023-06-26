#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str : pointer to the string
 *
 * Description : Function takes pointer to the string as a parameter
 * and prints the character of the string to a standard output.
 * It prints while looping through the characters untill null terminator 
 * is reached.
 * It is followed by a new line
 */

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
