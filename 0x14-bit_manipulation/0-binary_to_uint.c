#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int m;
unsigned int the_num = 0;

if (!b)
return (0);

for (m = 0; b[m]; m++)
{
if (b[m] < '0' || b[m] > '1')
return (0);
the_num = 2 * the_num + (b[m] - '0');
}

return (the_num);
}
