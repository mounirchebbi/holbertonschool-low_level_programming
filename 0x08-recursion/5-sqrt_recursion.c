#include "holberton.h"
/**
  *findroot- increment to find root
  *@a: increment
  *@b: root of
  *Return: root of
  */
int findroot(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	else
	{
		return (findroot(a + 1, b));
	}
}

/**
  *_sqrt_recursion- recursive sqrt
  *@n: root of
  *Return: int
  */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (findroot(1, n));

}

