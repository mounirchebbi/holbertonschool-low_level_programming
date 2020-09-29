#include "holberton.h"
/**
  *rev_string - to string reversed
  *@s: pointer to string
  *Return: void
  */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char ch;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		ch = *(s + j);
		*(s + j) = *(s + (i - j - 1));
		*(s + (i - j - 1)) = ch;
	}

}
