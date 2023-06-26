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

void rev_string(char *s)
{

	int length = 0, ind = 0;
	char temp;
	while (s[ind++])
	length++;

	for (ind = length -1; ind >= length / 2; ind--)
	{
	temp = s[ind];
	s[ind] = s[length - ind - 1];
	s[length - ind - 1] = temp;
	}
}
