#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * @...: rest of parameters
 * Return: int, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
