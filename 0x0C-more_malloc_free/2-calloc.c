#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @c: char to copy
 * @n: number of times to copy c
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char c, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = c;
}
return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *b;

if (nmemb == 0 || size == 0)
return (NULL);
b = malloc(size * nmemb);
if (b == NULL)
return (NULL);
_memset(b, 0, nmemb * size);
return (b);
}
