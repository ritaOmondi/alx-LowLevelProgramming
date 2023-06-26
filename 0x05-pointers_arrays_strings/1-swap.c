#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a - first integer being swapped
 * @b -  second integer being swapped
 *
 * Description: The function takes the value of a and swaps
 * it to the value of b. As the vice versa
 * Return : Success (Always)
 */
void swap_int(int *a, int *b)
{

	int tempV = *a;
	*a = *b;
	*b = tempV;



}
