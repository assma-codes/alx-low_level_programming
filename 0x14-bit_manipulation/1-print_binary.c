#include "main.h"

/**
 *print_binary - functio that gets value of a bit at given index
 *@n: number to be represented in binary
 *Return: vlue of bit or -1 on error
 */
void print_binary(unsigned long int n)
{
	/*int no_of_bits = sizeof(unsigned long int) * 8;*/
	int no_of_bits = 8;
	int i;

	for (i = no_of_bits - 1; i >= 0; i--)
	{
		unsigned long int tester = 1UL << i;
		int bit = n & tester;

	if (bit != 0)
		_putchar('1');
	if (bit == 0)
		_putchar ('0');
	}
}
