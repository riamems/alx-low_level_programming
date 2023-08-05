#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *m = needle;

while (*h == *m && *m != '\0')
{
h++;
m++;
}

if (*m == '\0')
return (haystack);
}
return (0);
}
