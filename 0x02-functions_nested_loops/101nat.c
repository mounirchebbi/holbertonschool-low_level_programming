#include <stdio.h>
/**
  *main - entry point
  *Return: 0 when success
  */

int main(void)
{
	int i = 1;
	int a, b;

	do {
		a = i * 3;
		b = i * 5;
		if (a < 1024 && b < 1024)
		{
			printf("%d, %d, ", a, b);
			i++;
		}
		else if (a == 1023)
		{
			printf("%d\n", a);
			i++;
		}
		else
		{
			printf("%d, ", a);
			i++;
		}

	} while (i < 342);
	return (0);
}
