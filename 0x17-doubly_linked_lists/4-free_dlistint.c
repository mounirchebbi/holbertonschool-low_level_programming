#include "lists.h"
/**
*free_dlistint - free list
*@head: head of list
*/
void free_dlistint(dlistint_s *head)
{
	dlistint_s *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
