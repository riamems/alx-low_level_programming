#include <stdio.h>
/**
*main - A program that prints the size of various computer types
* Return: 0
*/
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of long int: %ld byte(s)\n", sizeof(long));
printf("Size of long long int: %ld byte(s)\n", sizeof(long long));
printf("Size of float: %f  byte(s)\n", sizeof(float));

return (0);

}
