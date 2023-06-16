#include <stdio.h>
/**
 * main - prins alphabets in ;lowercase then uppercase
 * Return: Always  (Success)
 */

int main(void)
{
   char cases;
   for (cases = 'a'; cases <= 'z'; cases++)
   putchar(cases);

   for (cases = 'A'; cases <= 'Z'; cases++)
   putchar(cases);
   putchar('\n');
   return (0);
}
