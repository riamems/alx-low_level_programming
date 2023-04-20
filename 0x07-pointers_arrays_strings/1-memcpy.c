#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory to copy from
 * @n: bytes to be copied from
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
