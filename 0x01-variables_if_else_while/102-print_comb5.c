#include <stdio.h>
/**
  *main- entry point
  *Return: 0 when sucess then exit
  */
int main(void)
{
	int i, j, n1, n2, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = j; l <= 9; l++)
				{
					n1 = i * 10 + j;
					n2 = k * 10 + l;
					if (n1 != n2)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
						if ((n1 == 98) && (n2 == 99))
						{
							putchar('\n');
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					else
					{
					}
				}
			}
		}
	}
	return (0);
}
