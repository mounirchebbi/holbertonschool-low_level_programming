#include <stdio.h>
/**
  *main- entry point
  *Return: 0 when success then quit
  */
int main(void)
{
	unsigned long int pp = 1;
	unsigned long int p = 2;
	unsigned long int n = 3;
	unsigned long int s = 2;

	do {
		pp = p;
		p = n;
		n = pp + p;
		if (n % 2 == 0)
		{
			s = s + n;
		}

	} while (n < 4000000);

	printf("%lu\n", s);
	return (0);

}
