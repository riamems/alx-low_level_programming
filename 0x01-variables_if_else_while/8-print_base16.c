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

	for (s = 0; s < 16;` s++)
		putchar(s);
	for (m = 'a'; m <= 'p'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
