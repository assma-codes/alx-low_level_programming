#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - fuction adds node at the begining of the list
 * @head: address of the pointer of the first node
 * @n: data in the added node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!head || !newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
