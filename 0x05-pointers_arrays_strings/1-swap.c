#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a - first integer being swapped
 * @b -  second integer being swapped
 *
 * Description: The function takes the two pointers to integers as parameter
 * and swaps the values of the pointers it points to.
 * Return : Success (Always)
 */
void swap_int(int *a, int *b)
{

	int tempV = *a;
	*a = *b;
	*b = tempV;



}
