#include <stdio.h>
/**
 * main - use predifined macro to print the name of the current file.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
