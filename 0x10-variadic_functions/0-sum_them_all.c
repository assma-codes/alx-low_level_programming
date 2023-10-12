#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sumation of all args with n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sumation = 0;
	unsigned int i;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sumation = sumation + (va_arg(ptr, int));
	va_end(ptr);
	return (sumation);

}
