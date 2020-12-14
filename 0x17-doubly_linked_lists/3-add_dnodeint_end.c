#include "lists.h"
/**
*add_dnodeint_end - add node at end
*@head: head of list
*@n: data
*Return: double linked list
*/
dlistint_s *add_dnodeint_end(dlistint_s **head, const int n)
{
	dlistint_s *node;
	dlistint_s *temp;

	node = malloc(sizeof(dlistint_s));
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
