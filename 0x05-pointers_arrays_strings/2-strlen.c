#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s -  string length to be displayed
 *
 * Description: The function takes the pointer to a string  as a parameter
 * and returns the length of the string value
 */

int _strlen(char *s)
{

	int lenS = 0;

	while (*s++)
	lenS++;
	return (lenS);
		
}
