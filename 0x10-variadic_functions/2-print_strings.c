#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  print only strings
 *@n: number of arguments
 *@separator: comma to be printed between strings
 *
 *Return: no return while it is void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_ptr;
	char *str;

	va_start(list_ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list_ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n-1)&& separator != NULL)
			printf("%s", separator);
	}
	va_end(list_ptr);
	printf("\n");
}
