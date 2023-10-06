#include "main.h"
/**
 *_isupper -checks if a letter is uppercase
 *
 *@b: the number to be checked
 *
 * Return: 1 if b is uppercase 0 if otherwise
 */

int _isupper(int b)

{

if (b > 65 && b <= 90)
{
return (1);
}
else
return (0);
}
