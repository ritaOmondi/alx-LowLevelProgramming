#include "main.h"
/**
 * _strcmp - compares two string paramenter
 * @s1 - pointer to the first string to be compared
 * @s2 - pointer to the second string to be compared
 * if str1 == str2,0
 * if str1 > str2, positive difference
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
