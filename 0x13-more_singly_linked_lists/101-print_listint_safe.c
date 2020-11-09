#include "lists.h"
/**
  *list_size - count nodes in list containing a single loop
  *@head: pointer to list
  *Return: size
  */
size_t list_size(const listint_t *head)
{
	size_t size = 1;
	const listint_t *step;
	const listint_t *double_step;

	if (head == NULL || head->next == NULL)
		return (0);
	step = head->next;
	double_step = (head->next)->next;
	while (double_step)
	{
		if (step == double_step)
		{
			/**
			  *step back to head and start counting
			  */
			step = head;
			while (step != double_step)
			{
				size++;
				step = step->next;
				double_step = double_step->next;
			}
			/**
			  *step enters the loop
			  */
			step = step->next;
			while (step != double_step)
			{
				size++;
				step = step->next;
			}
			return (size);
		}
		step = step->next;
		double_step = (double_step->next)->next;
	}
	return (0);
}
/**
  *print_listint_safe - prints list containing a single loop
  *@head: pointer to list
  *Return: list size
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t size;
	size_t i = 0;

	size = list_size(head);
	if (size == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n",(void*)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("[%p] %d\n",(void*)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n",(void*)head, head->n);
	}
	return (size);
}
