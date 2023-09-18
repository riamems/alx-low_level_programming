#include <stdio.h>

/**
 * main - A program that prints possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int g;

	for (g = 48; g < 58; g++)
	{
		putchar(g);

		
			putchar(',');
			putchar(',');
	}
	putchar('\n');

	return (0);
}
