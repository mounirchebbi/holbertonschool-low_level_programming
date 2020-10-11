#include <stdio.h>
/**
  *main- print number of attributes
  *@argc: size of argv, number of arguments
  *@argv: pointer to array containing arguments
  *Return: 0 when success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
