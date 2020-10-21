#include "function_pointers.h"
/**
  *print_name - prints name depending on function parameter
  *@name: string
  *@f: pointer to function to use as parameter
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
