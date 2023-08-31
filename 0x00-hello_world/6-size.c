#include <stdio.h>
/**
*main - A program that prints the size of various computer types
* Return: 0
*/

int main(void)
{
int a = 5;
char i = 8 ;

printf("char\t\t%d\n", sizeof(char));
printf("short\t\t%d\n", sizeof(short));
printf("int\t\t%d\n", sizeof(int));
printf("long\t\t%d\n", sizeof(long));
printf("long long\t%d\n", sizeof(long long));
printf("float\t\t%d\n", sizeof(float));
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of long int: %lu byte(s)\n", sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of float: %lu  byte(s)\n", sizeof(float));

return (0);
}
