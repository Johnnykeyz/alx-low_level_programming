#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parametres
 * @n: number of parametres
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
