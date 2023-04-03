#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a;

	for (a = s; a < s + n; a++)
	{
		*a = b;
}
return (s);
}

