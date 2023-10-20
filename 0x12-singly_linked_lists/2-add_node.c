#include "lists.h"

/**
 *add_node - function add node at the begining of the list
 *@str: string which is member of the node
 *@head: pointer to the first node
 *Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_t *new_node = malloc(sizeof(struct list_t));

	new_node->str = strdup(str);
	new_node->len = 10;
	new_node->next = NULL;

	new_node->next = head;
	head = new_node;
	return (head);
}
