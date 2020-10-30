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
  *add_node_end- add note to tail
  *@head: pointer to list
  *@str: string
  *Return: size
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *temp;

	n->str = strdup(str);
	n->len = charsize(str);
	n->next = NULL;
	if (n != NULL)
	{
		if (*head == NULL)
			*head = n;
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = n;
		}
	}
	return (*head);
}
