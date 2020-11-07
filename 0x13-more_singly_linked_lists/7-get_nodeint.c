#include "lists.h"
/**
  *get_nodeint_at_index - get node of specific index
  *@head: pointer to list
  *@index: index
  *Return: node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (position < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		position++;
	}
	return (head);
}
