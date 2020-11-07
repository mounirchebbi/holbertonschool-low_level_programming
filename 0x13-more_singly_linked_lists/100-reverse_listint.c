#include "lists.h"
/**
  *reverse_listint - reverse list
  *@head: list head
  *Return: list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *post;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while ((*head)->next != NULL)
	{
		post = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = post;
	}
	(*head)->next = prev;
	return (*head);
}
