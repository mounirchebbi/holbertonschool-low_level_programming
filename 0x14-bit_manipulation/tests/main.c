#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;

	for (i=0 ;i < 100; i++)
	{
		printf("i>>1 : %d\n", i>>1);
		printf("i<<1 : %d\n", i<<1);
		printf("*************************************************************\n");
	}
	return 0;
}
