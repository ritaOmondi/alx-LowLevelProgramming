#include <stdio.h>

int main (void)
{
int i;
float f;
char c;
double d;

printf("The size of a char  is: %Zu byte(s)\n",sizeof(char));
printf("The size of an int is:%Zu bytes(s)\n", sizeof (int));
printf("The size of an long long int is:%Zu bytes(s)\n", sizeof (long long int));
prinf ("The size of a double is:%Zu byte(s)\n",sizeof(double));
return (0);

}
