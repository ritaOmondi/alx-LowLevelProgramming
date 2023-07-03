#include "main.h"
/**
 * _memset - Function used to fill block of memory
 * with a particular value
 * @n - first byte to be filled by the function
 * @s - pointer pointed to by the memory
 * @b - constant byte
 *
 * Return : A pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
