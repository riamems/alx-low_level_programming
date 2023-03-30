#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the source string
 * @dest: the srting to be returned
 * @n:number of strings
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
