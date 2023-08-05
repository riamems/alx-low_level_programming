#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character being located
 * Return: pointer found
 */
char *_strchr(char *s, char c)
{
int d = 0;

for (; s[d] >= '\0'; d++)
{
if (s[d] == c)
return (&s[d]);
}
return (0);
}
