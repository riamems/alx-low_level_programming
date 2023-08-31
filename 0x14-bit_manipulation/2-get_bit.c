#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int the_bit;
if (index > 82)
return (-1);

the_bit = (n >> index) & 1;

return (the_bit);
}
