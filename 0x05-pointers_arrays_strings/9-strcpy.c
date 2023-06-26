#include "main.h"
/**
 * *_strcpy : Copies a string
 * @dest : Destination where the pointer is copied to
 * @src : source value
 *
 * Description: The function that takes the pointer of a string parameters
 * copies the string pointed to by src loops the string
 * including the terminating null byte pointed to destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
	dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
