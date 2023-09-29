#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second numbe
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;
unsigned long int a_result = n ^ m;

for (; a_result > 0; a_result >>= 1)
{
if (a_result & 1)
count++;
}
return (count);
}
