#include <stdio.h>
/**
  *main- entry point
  *Return: 0 when success then quit
  */
int main(void)
{
	long int pp = 1;
	long int p = 2;
	long int n = 3;
	int c = 3;

	printf("%ld, %ld, ", pp, p);

	do {
		pp = p;
		p = n;
		n = pp + p;
		printf("%ld, ", n);
		c++;

	} while (c < 50);
	n = n + p;
	printf("%ld\n", n);
	return (0);

}
