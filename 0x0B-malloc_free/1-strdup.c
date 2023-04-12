#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 *@str: char
 * Return: a pointer
 */
char *_strdup(char *str)
{
char  *b;
int j, k = 0;

if (str == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
j++;

b = malloc(sizeof(char) * (j + 1));
if (b == NULL)
return (NULL);

for (k = 0; str[k]; k++)
b[k] = str[k];
return (b);
}
