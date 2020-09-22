#include "holberton.h"
#include <stdio.h>
/**
  *print_to_98 - print all natural numbers to 98
  *@n : start number
  *Return: void
  */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		if (n > 98)
		{
			do {
				printf("%d, ", n);
				n--;
			} while (n > 98);
			printf("98\n");
		}
		else
		{
			do {
				printf("%d, ", n);
				n++;
			} while (n < 98);
			printf("98\n");
		}
	}

}
