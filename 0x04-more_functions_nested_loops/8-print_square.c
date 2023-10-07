#include "main.h"
/**
 * print_square -function that prints a square #
 * @size: the size of the square
 * Return: Always 0
 */
void print_square(int size)
{
int h, w;

if (size <= 0)
{
_putchar('\n');
}
for (h = 0; h < size; h++)
{
for (w = 0; w < size; w++)
{
_putchar('#');
}
_putchar('\n');
}
}
