#include "lists.h"

/**
 *list_len - function calculate no of elements in a list
 *@h: poiter to the first node
 *Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		no_of_elements++;
		h = h->next;
	}
	return (no_of_elements);
}
