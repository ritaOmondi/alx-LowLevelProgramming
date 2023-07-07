#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the sum of all positive numbers
 * @argc : argument count
 * @argv : argument vector
 * Return : Always success 0
 */
int main(int argc, char *argv[])
{

	int a;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
	c = argv[a];
	for (b = 0; b < strlen(c); b++)
	{
	if (c[b] < 48 || c[b] > 57)
	{
	printf("error\n");
	return (1);
	}
	}
	sum += atoi(c);
	c++;
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
