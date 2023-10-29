#include "main.h"

/**
 *get_bit - functio that gets value of a bit at given index
 *@n: number in binary
 *@index: the index in which bit value will be returned
 *Return: vlue of bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tester = 1UL << index;
	unsigned long int result = n & tester;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (result != 0)
		return (1);
	else
		return (0);

}
