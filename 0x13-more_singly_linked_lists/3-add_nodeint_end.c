#include "lists.h"
/**
  *add_nodeint_end - add node last
  *@head: pointer to pointer to list
  *@n: list n
  *Return: pointer to list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
		(*head) = new;
	else
	{
		list = (*head);
		while (list->next)
		{
			list = list->next;
		}
		list->next = new;
	}
	return ((*head));
}

