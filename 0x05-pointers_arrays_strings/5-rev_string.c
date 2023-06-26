#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 * * Description: This function takes a pointer to a string as a parameter
 * and reverses the order of characters in the string. The reversal happens
 * in-place, modifying the original string.
 */

void rev_string(char *s)
{

	int length = 0, ind = 0;

	char temp;

	while (s[ind++])
	length++;

	for (ind = length - 1; ind >= length / 2; ind--)
	{
	temp = s[ind];
	s[ind] = s[length - ind - 1];
	s[length - ind - 1] = temp;
	}
}
