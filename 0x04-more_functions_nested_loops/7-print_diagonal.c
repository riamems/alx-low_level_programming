#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * Return: always 0
 * @n: the number of times the character is to be printed
 */
void print_diagonal(int n)
{
int l, g;

if (n <= 0)
{
_putchar('\n');
}
for (l = 0; l < n; l++)
{
for (g = 0; g < n; g++)
{
if (l == g)
_putchar('\\');
else if (l < g)
_putchar(' ');
}
_putchar('\n');
}
}
