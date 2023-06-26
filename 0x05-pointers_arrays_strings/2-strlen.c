#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s - pointer to the string
 *
 * Return: Length of the string
 * Description: The function takes the pointer to a string  as a parameter
 * by looping through the characters 
 * and  returns the length of the string value
 */

int _strlen(char *s)
{

	int lenS = 0;

	while (*s++)
	lenS++;
	return (lenS);
		
}
