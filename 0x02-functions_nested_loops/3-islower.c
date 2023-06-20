#include "main.h"
/**
 * is_lower:checks for lower characters
 * @c-character being checked
 * return 1 for lowercase and 0 for uppercase
 */

int _islower(int c)
{

	if (c <= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

