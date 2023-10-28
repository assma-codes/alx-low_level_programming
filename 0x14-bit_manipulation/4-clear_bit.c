#include "main.h"

/**
 * clear_bit - function that sets a bit to 0 at given index
 * @n: The given number
 * @index: The index of which bit to be set
 * Return: 1 on success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tester = ~(1UL << index);
	*n = *n & tester;
	return (*n);
}
