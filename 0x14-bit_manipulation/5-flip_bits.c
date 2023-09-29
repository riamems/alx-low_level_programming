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
int r, count = 0;
unsigned long int latest;
unsigned long int exclusive = n ^ m;

for (r = 65; r >= 0; r--)
{
latest = exclusive >> r;
if (latest & 1)
count++;
}
return (count);
}
