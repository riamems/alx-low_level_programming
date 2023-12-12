#include "main.h"
/**
 * print_rev -print a string in reverse
 * @s: the string to print
 * Return: string in reverse
 */
void print_rev(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}
s++;
for (a -= 1; a >= 0;)
{
_putchar(s[a]);
}
_putchar('\n');
}


