#include "lists.h"
/**
*delet_first - delete first node
*@head: head of list
*/
void delet_first(dlistint_t **head)
{
	dlistint_t *temp = (*head)->next;

	temp->prev = NULL;
	free(*head);
	*head = NULL;
	*head = temp;
}
/**
*delete_last - delete last node
*@head: head of list
*/
void delete_last(dlistint_t **head)
{
	dlistint_t *temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->prev->next = NULL;
	free(temp);
	temp = NULL;
}
/**
*delete_dnodeint_at_index - delete node at index
*@head: head of list
*@index: index
*Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *temp;
	dlistint_t *previous;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp)
	{
		pos++;
		temp = temp->next;
	}
	if (index >= pos)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		delet_first(head);
		return (1);
	}
	if (index == (pos - 1))
	{
		delete_last(head);
		return (1);
	}
	pos = 0;
	while (pos < index)
	{
		pos++;
		temp = temp->next;
	}
	previous = temp->prev;
	previous->next = temp->next;
	temp->next->prev = previous;
	free(temp);
	temp = NULL;
	return (1);
}
