#include "main.h"
#include <stdio.h>
/**
 * __strpbrk : A function which searches a string for any of a set of bytes.
 * @s : Pointer where first occurrence is being located from.
 * @char : input
 * @accept : input
 * Return : a pointer to the byte in s that matches bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{

	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
	{
	return (s + a);
	}
	}
	}
	return (NULL);
}
