#include "main.h"
#include <stdlib.h>
/**
 *
 * *_memset - fills memory with a constant byte
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
 *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *c;

if (nmemb == 0 || size == 0)
return (NULL);
c = malloc(size * nmemb);
if (c == NULL)
return (NULL);

_memset(c, 0, nmemb * size);
return (c);
}
