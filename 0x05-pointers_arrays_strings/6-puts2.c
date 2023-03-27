#include "main.h"
/**
 * puts2 -print strings
 *@s- the string 
 *Return: 0
 */

void rev_string(char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}


