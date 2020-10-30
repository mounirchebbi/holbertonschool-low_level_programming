#include "lists.h"
/**
  *charsize - size of string
  *@s: string
  *Return: size
  */
unsigned int charsize(const char *s)
{
	unsigned int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  *add_node- add note to head
  *@head: pointer to list
  *@str: string
  *Return: size
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new)
	{
		new->str = strdup(str);
		new->len = charsize(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}


