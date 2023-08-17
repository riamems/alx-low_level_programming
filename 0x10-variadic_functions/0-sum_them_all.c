#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return:0; If n== 0
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ln;
unsigned int j, sum = 0;
va_start(ln, n);

for (j = 0; j < n; j++)
sum += va_arg(ln, int);

va_end(ln);

return (sum);
}
