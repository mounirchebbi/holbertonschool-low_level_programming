#include "lists.h"
/**
*get_dnodeint_at_index - get node
*@head: head of list
*@index: index of node
*Return: node
*/
dlistint_s *get_dnodeint_at_index(dlistint_s *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_s *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	temp = head;
	while (temp && (i < index))
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
