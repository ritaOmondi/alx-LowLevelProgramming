#include "main.h"
/**
 * _strncpy -  copies two strings from src to dest
 * @src - source string
 * @dest - storing string copy
 * @n - number of string to be copied from src
 *
 * Return - Apointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int dex = 0, length = 0;

	while (src[dex++])
	{
	length++;
	}
	for (dex = 0; src[dex] && dex < n; dex++)
	{
	dest[dex] = src[dex];
	}
	for (dex = length; dex < n; dex++)
	{
	dest[dex] = '\0';
	}
	return (dest);
}
