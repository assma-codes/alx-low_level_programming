#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints elements of singe list
 * @h: pointer of the first node
 * Return: Number of nodes in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
