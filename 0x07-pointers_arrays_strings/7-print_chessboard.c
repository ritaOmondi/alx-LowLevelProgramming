#include "main.h"
#include  <stdio.h>
/**
 * print_chessboard : The function gives an output of the checboard
 * @a: An array
 * Return : Success
 */
void print_chessboard(char (*a)[8])
{

	int c, b;

	for (c = 0; c < 8; c++)
	{
	for (b = 0; b < 8; b++)
	_putchar(a[c][b]);
	_putchar('\n');
	}
}
