#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int eval (int n)
{
	if (n < 1)
		return 1;
	return (10*eval(n-1));
}
int main (int argc, char *argv[])
{
	int i,k;
	int val = 0;
	int change[5] = {25,10,5,2,1};
	int n=0;
	if (argc != 1)
	{
		printf ("Error\n");
		return (1);
	}
	for (i=0; argv[1][i] != '\0'; i++)
	{
		if (isdigit(argv[1][i]))
			n++;
		else
		{
			printf("0\n");
			return(1);
		}
	}
	for (i=0; argv[1][i] != '\0'; i++)
	{
		k = atoi(argv[1][i]) * eval (n);
		val += k;
		n--;
	}
	printf("%d\n", val);
	return (0);
}

