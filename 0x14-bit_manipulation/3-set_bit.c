#include "main.h"

/**
 * set_bit - function that sets a bit to 0 at given index
 * @n: The given number
 * @index: The index of which bit to be set
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tester = (1UL << index);

	if (!*n || index > 64)
		return (-1);
	while (*n && index < 64)
	{
		*n |= tester;
		return (1);
	}
	return (*n);
}
