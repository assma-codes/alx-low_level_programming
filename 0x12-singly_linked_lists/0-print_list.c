#include "lists.h"

/**
 * size_t print_list - function prints all elements of list_t
 * @str: string to be printed
 * @len: length of string
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t no_of_nodes = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");
		no_of_nodes += 1;
		cursor = cursor->next;
	}

	return (no_of_nodes);
}


