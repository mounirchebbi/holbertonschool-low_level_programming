#include "lists.h"
/**
  *free_listint2 - free list
  *@head: pointer to pointer to list
  */
void free_listint2(listint_t **head)
{
	listint_t *list;
	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		list = (*head)->next;
		free((*head));
		(*head) = list;
	}
}


