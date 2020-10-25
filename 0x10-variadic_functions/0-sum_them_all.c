#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - sum of variable arguments
  *@n : size of arguments
  *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list lst;

	va_start(lst, n);
	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(lst, int);
	va_end(lst);
	return (s);
}
