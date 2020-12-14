#include "lists.h"
/**
*dlistint_len - list lenght
*@h: double linked list head
*Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
