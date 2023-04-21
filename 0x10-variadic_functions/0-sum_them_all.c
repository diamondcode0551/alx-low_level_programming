#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them all - return the sum of all its parameters.
 * @n: the number of parameters to the function.
 * @...: a variable number of parameters to calculate the sum of.
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sa;
	unsigned int i, sum = 0;

	va_start(sa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sa, int);

	va_end(sa);
	return (sum);
}
