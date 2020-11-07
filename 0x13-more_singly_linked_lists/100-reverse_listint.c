#include "lists.h"
/**
  *reverse_listint - reverse list
  *@head: list head
  *Return: list
  */
listint_t *reverse_listint(listint_t **head)
{
	int_list *list;
	int_list *prev;
	int_list *step;
	int_list *first;

	if (head == NULL || *head == NULL)
		return (NULL);
	first = (*head);
	step = first->next;
	first->next = NULL;
	prev = first;
	list = step;
	while (list)
	{
		step = list->next;
		list->next = prev;
		prev = list;
		list = step;
	}
	(*head) = prev;
	return (prev);
}
