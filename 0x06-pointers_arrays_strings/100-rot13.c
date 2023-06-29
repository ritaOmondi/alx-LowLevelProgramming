#include "main.h"
/**
 * rot13 - encoder rot13
 * @s - pointer to parameters
 * Return *S
 */
char *rot13(char *s)
{

	int a, b;
	char dat1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if ( s[a] == dat1[b])
	{
	s[a] = datrot[b];
	break;
	}
	}
	}
	return (s);
}
