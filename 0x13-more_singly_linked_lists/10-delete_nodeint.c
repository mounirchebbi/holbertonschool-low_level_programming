#include "lists.h"
/**
  *delete_nodeint_at_index - delete node at index
  *@head: list head
  *@index: index
  *Return: int
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *list = (*head);
	listint_t *temp;

	if (list == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(list);
		return (1);
	}
	while (position < (index - 1))
	{
		if (list->next == NULL)
			return (-1);
		list = list->next;
		position++;
	}
	temp = list->next;
	list->next = temp->next;
	free(temp);
	return (1);
}

