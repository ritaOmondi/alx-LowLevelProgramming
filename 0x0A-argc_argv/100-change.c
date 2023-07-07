#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing the minimum coin change
 * @argc : argument count
 * @argv : argument vector
 *Return : Always 0 success
 */
int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc != 2)
	{
	printf("error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
	coin++;
	if ((cents - 25) >= 0)
	{
	cents -= 25;
	continue;
	}
	if ((cents - 10) >= 0)
	{
	cents -= 10;
	continue;
	}
	if ((cents - 5) >= 0)
	{
	cents -= 5;
	continue;
	}
	if ((cents - 2) >= 0)
	{
	cents -= 2;
	continue;
	}
	cents--;
	}
	printf("%d\n", coin);
	return (0);
}
