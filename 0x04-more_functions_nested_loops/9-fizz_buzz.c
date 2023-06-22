#include "main.h"
#include <stdio.h>
/**
 * main: Prints a fizz buzz program
 * Return: Always (success)
 */

int main(void)
{

	int e;

	for (e = 1; e <= 100; e++)
	{
	if ((e % 3 == 0) && (e % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (e % 3 == 0)
	{
	printf("Fizz");
	}
	else if (e % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", e);
	}
	if (e != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
