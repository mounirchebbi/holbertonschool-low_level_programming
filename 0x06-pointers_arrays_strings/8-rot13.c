#include "holberton.h"
/**
  *rot13- the rot13 encoding
  *@s: pointer to string
  *Return: pointer to string
  */
char *rot13(char *s)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j, stop;

	while (*(s + i) != '\0')
	{
		j = 0;
		stop = 0;
		while (*(alpha + j) != '\0' && stop == 0)
		{
			if (*(s + i) == *(alpha + j))
			{
				*(s + i) = *(rot + j);
				stop = 1;
			}
			j++;
		}
		i++;
	}
	return (s);
}


