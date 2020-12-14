#include "lists.h"
/**
*add_dnodeint_end - add node at end
*@head: head of list
*@n: data
*Return: double linked list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = node;
		node->prev = temp;
	}
	return (*head);
}
