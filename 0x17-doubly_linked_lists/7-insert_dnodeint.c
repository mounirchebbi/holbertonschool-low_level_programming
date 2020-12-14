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
	dlistint_t *node;
	dlistint_t *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = temp;
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;

	return (node);
}
