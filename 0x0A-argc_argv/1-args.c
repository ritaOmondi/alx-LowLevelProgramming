#include "main.h"
#include  <stdio.h>
/**
 * main - prints the number of argument
 * @argc : argument count
 * @argv : argument vector
 *
 * Return : Always success (0)
 */
int main(int argc, char *argv[])
{

	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}