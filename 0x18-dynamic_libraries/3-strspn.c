#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @accept: bytes that consist of s
 * @s: bytes of intial segment
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int g;

while (*s)
{
for (g = 0; accept[g]; g++)
{
if (*s == accept[g])
{
n++;
break;
}
else if (accept[g + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
