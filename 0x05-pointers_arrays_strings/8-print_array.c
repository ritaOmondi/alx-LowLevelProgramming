#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array poof elements
 * @n - numbers of array elements to be printed
 * Description: The function takes a pointer to an integer parameter
 * and returns elements of integers to the standard output
 * separated by a comma and a space
 */

void print_array(int *a, int n)
{

	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
