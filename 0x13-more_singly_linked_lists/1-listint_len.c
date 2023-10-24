#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that prints the number of nodes in the list
 * @h: pointer to the first node
 * Return: number of nodes in the list/
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != 0)
	{
	h = h->next;
	len++;
	}
	return (len);


}
