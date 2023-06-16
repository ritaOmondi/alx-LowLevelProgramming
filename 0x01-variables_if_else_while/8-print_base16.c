#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints hexadecimal numbers
 * Return: Always  (Success)
 */


int main(void)
{

	int b;
	char deci;

	for (b = '0'; b <= '9'; b++)
	putchar(b);

	for (deci = 'a'; deci <= 'f'; deci++)
	putchar(deci);
	putchar('\n');

	return (0);

}
