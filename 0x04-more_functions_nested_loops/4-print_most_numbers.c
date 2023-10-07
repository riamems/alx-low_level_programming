#include "main.h"
/**
 *print_most_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
char k;

for (k = '0'; k <= '9'; k++)
{
if (!(k == '2' || k == '4'))

_putchar(k);
}
_putchar('\n');
}
