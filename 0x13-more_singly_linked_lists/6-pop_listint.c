#include "lists.h"
/**
  *pop_listint - delete first node+return it's data
  *@head: pointer to pointer to list
  *Return: node data
  */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *list;

	if ((*head) == NULL)
		return (-1);
	a = (*head)->n;
	list = (*head);
	(*head) = (*head)->next;
	free(list);
	return (a);
}
