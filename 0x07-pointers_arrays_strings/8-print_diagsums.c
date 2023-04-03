#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: a pointer
 * @size: the size of the square
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}
	_putchar('%d,'\n');
	_putchar (sum1);
	_putchar(sum2);
}
