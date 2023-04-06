#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return:the length of a string
 */
int _strlen_recursion(char *s)
{
int lengthof = 0;

if (*s)
{
lengthof++;
lengthof += _strlen_recursion(s + 1);
}
return (lengthof);
}
