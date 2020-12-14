#include "lists.h"
/**
*add_dnodeint - add node
*@head: head of list
*@n: data
*Return: list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (*head);
}
