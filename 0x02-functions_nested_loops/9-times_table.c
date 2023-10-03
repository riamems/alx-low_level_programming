#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */
void times_table(void)
{
int row, column, result;

for (row = 0; row < 10; row++)
{
for (column = 0; column < 10; column++)
{
result = row * column;

if (column == 0)
{

_putchar('0' + result);
}
if (result < 10 && column != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + result);

}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
}
_putchar('\n');
}
}
