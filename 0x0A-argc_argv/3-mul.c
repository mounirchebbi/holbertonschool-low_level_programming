#include <stdio.h>
#include <stdlib.h>
/**
  *main- print number of attributes
  *@argc: size of argv, number of arguments
  *@argv: pointer to array containing arguments
  *Return: 0 when success
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
