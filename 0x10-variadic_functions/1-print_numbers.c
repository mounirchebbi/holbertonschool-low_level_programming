#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *print_numbers - print variable args int sparated by seprator
  *@separator: separator
  *@n: size of variables
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(lst, int);
		if (separator)
			printf("%d%s", num, separator);
		/*
		 *else if (separator == NULL)
			printf("%d", num);*
		 */
	}
	if (separator)
	{
		num = va_arg(lst, int);
		printf("%d\n", num);
	}
	else
	{
		printf("\n");
	}
	va_end(lst);
}
