#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
  *main - entry point
  *@argc: number of arguments
  *@argv: array of pointer to arguments
  *Return: 0 when success
  */
int main(int argc, char *argv[])
{
	int a, b, operation, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = *(argv[2]);
	if ((operation == '/' && b == 0) || (operation == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
