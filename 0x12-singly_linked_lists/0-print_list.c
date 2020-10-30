#include "lists.h"
/**
  *print_list - prints singly linked list
  *@h: pointer to list head
  *Return:  size of elemnts
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (-1);
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
