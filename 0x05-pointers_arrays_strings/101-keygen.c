#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random passwords
 * program 101-crackme
 * Return: Success
 */
int main (void)
{

	char pwd[84];
	int index = 0, sum = 0, half1, half2;
	srand(time(0));

	while (sum < 2772)
	{
	pwd[index] = 33 + rand() % 94;
	sum += pwd[index++];
	}
	pwd[index] = '\0';
	if (sum != 2772)
	{
	half1 = (sum - 2772) / 2;
	half2 = (sum - 2772) / 2;
	if ((sum - 2772) % 2 != 0)
	half1++;
	for (index = 0; pwd[index]; index++)
	{
	if (pwd[index] >= (33 + half2))
	{
	pwd[index] -= half2;
	break;
	}
	}
	}
	printf("%s", pwd);
	return (0);
}

