#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
  *print_all - prints all arguments following format order
  *@format: format
  */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list lst;
	void *arg;
	char *spacer = "";
	specif spf[] = {
		{"c", "%c"},
		{"i", "%d"},
		{"f", "%f"},
		{"s", "%s"},
		{NULL, NULL}
	};

	va_start(lst, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (spf[j].a != NULL)
		{
			if (spf[j].a[0] == format[i])
			{
				printf("%s", spacer);
				arg = va_arg(lst, void*);
				/**
				 *if ((arg == NULL) && (spf[j].a[0] == 's'))
				 *	printf("%p", arg);
				 */
				if ((arg == NULL) && (spf[j].a[0] == 's'))
					arg = "(nil)";
				printf(spf[j].b, arg);
				spacer = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(lst);
	printf("\n");
}
