#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns parameter sum.
 * @n: num of paramters passed to the func.
 * @...: A var num of paramters to calc the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the parameter sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
