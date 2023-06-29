#include "main.h"
/**
 * *_strcat - THe Function concatinates two strings
 * @src - first pointer to be concatenated
 * @dest -  the second pointer being concatenated
 *
 * Description - The function concatenates two pointer parameters
 * Function appends the src string to dest string overwriting
 * the terminating null byte.
 *
 * Return - dest
 */

char *_strcat(char *dest, char *src)
{

	int strng = 0, i;

	while (dest[strng])
	{
	
	strng++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	dest[strng] = src[i];
	strng++;
	}
	dest[strng] = '\0';
	return (dest);
}
