#include "main.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number or 0 if otherwise
 * Return: 1 or 0 depending on the  prime number
 */
int is_prime_number(int n)
{
	{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}

