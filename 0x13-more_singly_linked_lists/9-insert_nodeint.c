#include "lists.h"
/**
  *insert_nodeint_at_index - node at index
  *@head: head of list
  *@idx: index
  *@n: node data
  *Return: pointer to new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *new;
	listint_t *list = (*head);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = list;
		(*head) = new;
	}
	else
	{
		while (position < (idx - 1))
		{
			if (list == NULL || list->next == NULL)
				return (NULL);

			list = list->next;
			position++;
		}
		new->next = list->next;
		list->next = new;
	}
	return (new);
}
