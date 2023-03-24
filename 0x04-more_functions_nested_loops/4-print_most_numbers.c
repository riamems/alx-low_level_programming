#include "main.h"
/**
 *main function -prints the numbers from 0 to 9
 *
 * Return: printed numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int k = 0;

for (; k <= 9; k++)
{
if (k != 2 && k != 4)
{
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
