#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest - string to be appended upon
 * @src - string to be appended on dest
 * @n - number to bytes to be appended on dest
 *
 * Return - pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int dex = 0, length = 0;

	while (dest[dex++])
	length++;
	for (dex = 0; src[dex] && dex < n; dex++)
	dest[length++] = src[dex];
	return (dest);
}
