#include <stdio.h>
/**
 * main - prints the name of a file complied from
 * Return: 0
 */
int main(void)

{
for (const char *filename = __FILE__; *filename; putchar(*filename++))
_putchar('\n');

return (0);
}
