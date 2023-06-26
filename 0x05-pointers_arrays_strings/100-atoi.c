#include "main.h"
 /**
  * _atoi : converts a string to an integer
  * * @s: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and converts the string to an integer. It skips any leading whitespace
 * characters and then processes the characters until a non-digit character
 * is encountered or the end of the string is reached. The resulting integer
 * value is returned.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{

	int a = 0;
	unsigned int un = 0;
	int mn = 1;
	int stng = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	mn *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	stng = 1;
	un = (un * 10) + (s[a] - '0');
	a++;
	}
	if (stng == 1)
	{
	break;
	}
	a++;
	}
	un *= mn;
	return (un);

}
