#include "lists.h"
/**
  *print_listint - print list
  *@h: pointer to list
  *Return: list size
  */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}

