#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function frees list
 *@head: pointer to the first element
 *Return: no return value
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
