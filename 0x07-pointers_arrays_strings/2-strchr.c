#include "main.h"
#include <stdio.h>
/**
 *_strchr - Function locates a character in a string
 *@s : Input
 *@c : Input
 *Return : A pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (s + a);
	}
	return (NULL);
}
