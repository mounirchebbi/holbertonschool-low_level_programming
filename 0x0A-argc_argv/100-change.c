#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *transform- calculate number of changes
  *@change: pieces of change
  *@n: number to change
  *@i: step
  *Return: number of changes
  */
int transform(int change[5], int n, int i)
{
	int piece = change[i];

	if (i > 5)
		return (0);
	return (n / piece + transform(change, n % piece, ++i));
}
/**
  *main- number of change
  *@argc: arguments must be = 2
  *@argv: argv
  *Return: 0 when sccess
  */
int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
		printf("%d\n", 0);
	printf("%d\n", transform(change, n, 0));
	return (0);
}

