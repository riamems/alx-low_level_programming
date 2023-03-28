#include "main.h"
/**
 * puts_half -print half of a string
 *@str: the string to print
 * Return: empty
 */
void puts_half(char *str)
{
	int j = 0;
	int k;
	while (str[j] != '\0')
	{
		j++;
		if (j % 2 == 0)
		{
			k = (
