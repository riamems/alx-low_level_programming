#include "main.h"

/**
 * _strpbrk - searches a  string for any set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
int m;

while (*s)
{
for (m = 0; accept[m]; m++)
{
if (*s == accept[m])
return (s);
}
s++;
}
return ('\0');
}
