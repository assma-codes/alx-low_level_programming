#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);

	putchar('\n');
	return (0);
}
