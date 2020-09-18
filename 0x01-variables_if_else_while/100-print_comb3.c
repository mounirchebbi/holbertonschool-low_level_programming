#include <stdio.h>
/**
  *main- entry point
  *Return: 0 when succeed then exit
  */
int main(void)
{
int i, j, n;

for (i = 0; i <= 9; i++)
{
	for (j = i + 1; j <= 9; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		n = i * 10 + j;
		if (n < 89)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
}
return (0);
}
