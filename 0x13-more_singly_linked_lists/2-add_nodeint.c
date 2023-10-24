#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds node to the begining of the list
 * @head: pointer of the pointer of the first element
 * @n: int data in the new node
 * Return: struct new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->n = n;
	if (*head)
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
