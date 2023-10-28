#include "main.h"

/**
 * clear_bit - function that sets a bit to 0 at given index
 * @n: The given number
 * @index: The index of which bit to be set
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tester = ~(1UL << index);
	*n &= tester;
	if (! *n)
		return (-1);
	else
		return (1);
	return (*n);
}
