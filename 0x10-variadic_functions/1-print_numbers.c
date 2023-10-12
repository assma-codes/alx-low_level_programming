#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers seperated by comma
 * @n: number of intigers
 * @separator: comma between numbers
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_ptr;
	unsigned int i;

	va_start(list_ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_ptr, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(list_ptr);
	printf("\n");

}
