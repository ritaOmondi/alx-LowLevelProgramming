#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @str - string being changed
 */

char *string_toupper(char *str)
{

	int dex = 0;

	while(str[dex])
	{
	if (str[dex] >= 'a' && str[dex] <= 'z')
	str[dex] -= 32;
	dex++;
	}
	return (str);
}
