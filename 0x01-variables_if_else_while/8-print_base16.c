#include <stdio.h>
/**
*main -main function
*
* Return: always 0
*/
int main(void)
{
	int s;
	char m;

	for (s = 48; s < 58; s++)
		putchar(s);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
