#include "main.h"
/**
 * cap_string - capitalizes all string
 * @str - string to be capitalized
 * Return - Apointer to the changed string
 */
char *cap_string(char *str)
{

	int dex = 0;

	while (str[dex])
	{
	while (!(str[dex] >= 'a' && str[dex] <= 'z'))
	dex++;
	if ( 
	str[dex - 1] == '\0' ||
	str[dex - 1] == '\t' ||
	str[dex - 1] == '\n' ||
	str[dex - 1] == ',' ||
	str[dex - 1] == ';' ||
	str[dex - 1] == '.' ||
	str[dex - 1] == '!' ||
	str[dex - 1] == '?' ||
	str[dex - 1] == '"' ||
	str[dex - 1] == '' ||
	str[dex - 1] == '(' ||
	str[dex - 1] == ')' ||
	str[dex - 1] == '{' ||
	str[dex - 1] == '}' ||
	dex == 0)
	str[dex] -= 32;
	dex++;
	}
	return (str);
}
