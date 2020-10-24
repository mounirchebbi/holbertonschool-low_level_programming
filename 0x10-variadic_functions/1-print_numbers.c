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
		printf("%d", num);
		if (separator)
			printf("%s", separator);
	}
	num = va_arg(lst, int);
	printf("%d\n", num);
	va_end(lst);
}
