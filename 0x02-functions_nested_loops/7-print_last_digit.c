#include "main.h"
/**
 * print_last_digit : prints the last digit of a number
 * @n : character to be found
 * Return: THe last value of the digit
 */

int print_last_digit(int n)

{

	int lastD;

	lastD = n % 10;
	if (lastD < 0)
	{
	lastD = lastD * -1;
	}
	_putchar(lastD + '0');
	return (lastD);


}
