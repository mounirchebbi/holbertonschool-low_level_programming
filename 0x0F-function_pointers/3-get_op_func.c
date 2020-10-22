#include <stdlib.h>
#include "3-calc.h"
/**
  *get_op_func - function selector
  *@s: operator
  *Return: pointer to function that takes int int as parameters
  */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *(s))
			return (ops[i].f);
	}
	return (NULL);
}
