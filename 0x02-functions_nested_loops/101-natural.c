#include <stdio.h>
/**
  *main - entry point
  *Return: 0 when success
  */

int main(void)
{
	int i = 1;
	int s = 0;
	int a, b;

	do {
		a = i * 3;
		b = i * 5;
		if (b <= 1020)
		{
			s = s + a + b;
		}
		else
		{
			s = s + a;
		}
		i++;

	} while (i < 342);
	printf("%d\n", s);
	return (0);
}
