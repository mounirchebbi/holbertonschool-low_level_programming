#include "lists.h"
/**
*sum_dlistint - sum of data
*@head: head of list
*Return: sum
*/
int sum_dlistint(dlistint_s *head)
{
	dlistint_s *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
