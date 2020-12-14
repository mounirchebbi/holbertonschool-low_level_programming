#include "lists.h"
/**
*print_dlistint - print double linked lists
*@h: pointer to list head
*Return: number of elements
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (sum);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
