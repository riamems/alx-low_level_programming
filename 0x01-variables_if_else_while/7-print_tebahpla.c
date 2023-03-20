#include <stdio.h>
/**
*main -main function
*
* Return: always 0
*/
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
