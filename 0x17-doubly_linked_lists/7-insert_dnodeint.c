#include "lists.h"
/**
*insert_dnodeint_at_index - insert node at index
*@h: head of list
*@idx: index
*@n: data
*Return: list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *node;
	dlistint_t *previous;
	unsigned int pos = 0;

	if (*h == NULL)
		return (NULL);

	temp = *h;
	while (temp)
	{
		temp = temp->next;
		pos++;
	}
	if (idx > pos)
		return (NULL);
	else if (idx == 0)
		add_dnodeint(h, n);
	else if (pos == idx)
		add_dnodeint_end(h, n);
	else
	{
		temp = *h;
		pos = 0;
		node = malloc(sizeof(dlistint_t));
		node->n = n;
		while (pos < idx)
		{
			previous = temp;
			temp = temp->next;
			pos++;
		}
		node->prev = previous;
		node->next = temp;
		previous->next = node;
		temp->prev = node;
	}
	return (*h);
}
