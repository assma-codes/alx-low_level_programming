#include "main.h"
#include <stdio.h>
/**
 * postitive_or_negative -  checks if number is positive or negative
 * Return: void
 */

void postitive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
