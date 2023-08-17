#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all the paramters
 * @n: the number of paramter passed
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arg;

	va_start(arg, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}


	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);
	return (sum);
}

