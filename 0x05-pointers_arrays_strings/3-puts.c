#include "main.h"
/**
 * _puts -prints a string
 * @str: string to be printed
 * Return: empty
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
