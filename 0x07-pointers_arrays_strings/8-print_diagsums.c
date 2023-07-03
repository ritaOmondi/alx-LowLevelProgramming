#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function prints the sum of two square matrix diagonals
 * @a : First array
 * @size: input
 * Return : Sucess
 */
void print_diagsums(int *a, int size)
{

	int c, b;
	int sum1 = 0;
	int sum2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
	sum1 = sum1 + a[c];
	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
	sum2 = sum2 + a[b];
	printf("%d, %d\n", sum1, sum2);
}
