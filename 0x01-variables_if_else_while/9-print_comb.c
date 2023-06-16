#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints combination of digits
 * Return: Always  (Success)
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
	
	putchar(z);
	if(z != '9')
	{
	putchar(',');
	}
	
	}
	putchar('\n');
	return (0);



}
