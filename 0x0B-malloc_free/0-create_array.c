#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and intialzes it with a specified char
 * @size: size of an array
 * @c: char to assign
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int j;

a = malloc(sizeof(char) * size);
if (size == 0 || a == NULL)
return (NULL);

for (j = 0; j < size; j++)
a[j] = c;
return (a);
}
