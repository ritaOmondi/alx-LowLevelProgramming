#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Function allocates memory using malloc
 * @b : positive int to be assigned memory
 *
 * Return : a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);
}
