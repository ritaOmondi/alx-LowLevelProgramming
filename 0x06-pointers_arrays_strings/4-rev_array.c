#include "main.h"
/**
 * reverse_array - reverses the content of arrays of integers
 * @a - array of integer to be reversed
 * @n - number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{

	int temp, dex;

	for (dex = n - 1; dex >= n / 2; dex--)
	{
	temp = a[n - 1 - dex];
	a[n - 1 - dex ] = a[dex];
	a[dex] = temp;
	}
}
