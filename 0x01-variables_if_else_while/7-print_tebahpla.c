#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets in reverse form
 * Return: Always  (Success)
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	putchar(rev);
	putchar('\n');

	return (0);




}
