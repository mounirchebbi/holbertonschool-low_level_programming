#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main- sum of args
  *@argc: args size
  *@argv: args strings
  *Return: int
  */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
