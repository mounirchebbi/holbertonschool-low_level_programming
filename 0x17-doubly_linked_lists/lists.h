#ifndef dlistint_s_HEADER
#define dlistint_s_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
		int n;
		struct dlistint_s *prev;
		struct dlistint_s *next;
} dlistint_s;
size_t print_dlistint(const dlistint_s *h);
size_t dlistint_len(const dlistint_s *h);
dlistint_s *add_dnodeint(dlistint_s **head, const int n);
dlistint_s *add_dnodeint_end(dlistint_s **head, const int n);
void free_dlistint(dlistint_s *head);
dlistint_s *get_dnodeint_at_index(dlistint_s *head, unsigned int index);
int sum_dlistint(dlistint_s *head);
dlistint_s *insert_dnodeint_at_index(dlistint_s **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_s **head, unsigned int index);
#endif
