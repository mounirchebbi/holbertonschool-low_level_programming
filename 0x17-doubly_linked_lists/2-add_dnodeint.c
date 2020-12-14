#include "lists.h"
/**
*add_dnodeint - add node
*@head: head of list
*@n: data
*Return: list
*/
dlistint_s *add_dnodeint(dlistint_s **head, const int n)
{
	dlistint_s *node;

	node = malloc(sizeof(dlistint_s));
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (*head);
}
