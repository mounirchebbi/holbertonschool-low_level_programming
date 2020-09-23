#include <stdio.h>
/**
  *main- entry point
  *Return: 0 when success then quit
  */
int main(void)
{
	unsigned long int pp = 1;
	unsigned long int p = 2;
	unsigned long int n = p + pp;
	int c = 4;

	printf("%lu, %lu, %lu, ", pp, p, n);

	do {
		pp = p;
		p = n;
		n = pp + p;
		printf("%lu, ", n);
		c++;

	} while (c < 98);
	n = n + p;
	printf("%lu\n", n);
	return (0);

}
