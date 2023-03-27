#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 * @a: an integer to swap
 * @b: an integer to swap
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

