#include "holberton.h"
/**
  *isprime- count till prime
  *@a: counter
  *@b: prime?
  *Return: int
  */
int isprime(int a, int b)
{
	if (a == b)
		return (1);
	if (b % a == 0)
	{
		return (0);
	}
	else
		return (isprime(a + 1, b));
}
/**
  *is_prime_number- check if prime
  *@n: prime?
  *Return: int
  */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
	{
		return (0);
	}
	return (isprime(2, n));
}
