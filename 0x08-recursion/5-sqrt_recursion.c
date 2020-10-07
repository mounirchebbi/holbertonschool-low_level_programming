#include "holberton.h"
/**
  *factorial- recursive factorial
  *@n: factorial
  *Return: int
  */
int _sqrt_recursion(int n)
{
	int mid = n / 2;
	if (n <= 0)
		return (-1);
	else if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return(_sqrt_recursion(mid-1));
	}
	else
		return(_sqrt_recursion(mid+1));
}

