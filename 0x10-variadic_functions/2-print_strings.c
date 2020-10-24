#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *print_strings - print variable args strings sparated by seprator
  *@separator: separator
  *@n: size of variables
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		if (str)
		{
			str = va_arg(lst, char*);
			printf("%s", str);
		}
		else if (str == NULL)
			printf("nil");
		if (i == n - 1)
			break;
		if (separator)
			printf("%s", separator);
	}
	va_end(lst);
	printf("\n");
}
