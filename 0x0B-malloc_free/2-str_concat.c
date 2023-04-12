#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ca;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = ca = 0;
while (s1[i] != '\0')
i++;
while (s2[ca] != '\0')
ca++;
conct = malloc(sizeof(char) * (i + ca + 1));

if (conct == NULL)
return (NULL);
i = ca = 0;
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}

while (s2[ca] != '\0')
{
conct[i] = s2[ca];
i++, ca++;
}
conct[i] = '\0';
return (conct);
}

