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
		if (a < 1024 && b < 1024)
		{
			s + = a + b;
			i++;
		}
		else if (a == 1023)
		{
			s + = a;
			i++;
		}
		else
		{
			s + = a;
			i++;
		}

	} while (i < 342);
	printf("%d\n", s);
	return (0);
}
