#include "lists.h"
/**
  *list_len - list lenght
  *@h: header of list
  *Return: lenght
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
