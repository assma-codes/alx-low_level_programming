#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long xor_result = (n ^ m);
	/*unsigned long int max = 0x01;*/

	while (xor_result != 0)
	{
		xor_result = xor_result & (xor_result - 1);
		counter++;
	}
	return (counter);
}
