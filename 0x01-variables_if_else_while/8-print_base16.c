#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	for (i = 0 ; i < 10; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
