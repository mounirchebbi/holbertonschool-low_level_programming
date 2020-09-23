#include <stdio.h>
/**
  *main - entry point
  *Return: 0 when success
  */

int main(void)
{
	int i = 1;
	int s = 0;

	do {
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
		i++;

	} while (i < 1024);
	printf("%d\n", s);
	return (0);
}
