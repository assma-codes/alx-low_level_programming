#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function frees list
 *@head: pointer to the first element
 *Return: no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}