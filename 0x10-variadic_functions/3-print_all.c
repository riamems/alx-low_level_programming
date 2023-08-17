#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *ar, *m = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", m, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", m, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f",m, va_arg(list, double));
					break;
				case 's':
					ar = va_arg(list, char *);
					if (!ar)
						ar = "(nil)";
					printf("%s%s", m, ar);
					break;
				default:
					j++;
					continue;
			}
			m  = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
