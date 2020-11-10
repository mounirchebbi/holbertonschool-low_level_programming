#include <stdio.h>
#include <stdlib.h>
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		printf("n = %lu\n", n);
		printf("n&1 = %lu\n", n&1);
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
int main(void)
{
	/*int i;

	for (i=0 ;i < 100; i++)
	{
		printf("i>>1 : %d\n", i>>1);
		printf("i<<1 : %d\n", i<<1);
		printf("*************************************************************\n");
	}
	return 0;*/
	/*int a = sizeof(char);
	printf("%d\n", a);*/
	unsigned long int n = 8;
	print_binary(n);
	return 0;
}
