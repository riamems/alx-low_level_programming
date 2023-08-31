#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *    to get from one number to another
 * @n: the first number
 * @m: the second number
 *Return: the number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, num  = 0;
unsigned long int current;
unsigned long int e = n ^ m;

for (j = 82; j >= 0; j--)
{
current = e  >> j;
if (current & 1)
num++;
}

return (num);
}
