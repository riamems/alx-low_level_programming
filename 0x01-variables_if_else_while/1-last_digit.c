#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- main function
*
* Return: always 0
*/
int main(void)
{
int n, Last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
 
Last_digit = n % 10;

if (Last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (Last_digit == 0)
{
printf("and is 0\n");
}
else if ((Last_digit < 6) && Last_digit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}

