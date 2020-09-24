#include <stdio.h>
/**
  *main - entry point
  *Return:void
  */
int main(void)
{
	int i;
	unsigned long int prime;
	unsigned long int p = 612852475143;

	for (i = 1; i < p; i++)
	{
		if (p % i == 0)
		{
			prime = i;
		}
	}
	printf("%lu\n", prime);
	return (0);
}
