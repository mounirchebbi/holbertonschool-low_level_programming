#include "lists.h"
/**
  *listint_len- list lenght
  *@h: pointer to list
  *Return: lenght
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
