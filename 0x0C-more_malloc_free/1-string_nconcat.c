#include "holberton.h"
#include <stdlib.h>
/**
  *sized- size of string
  *@str: string
  *@i: initialization
  *Return: size
  */
int sized(char *str, int i)
{
	if (str == NULL)
		return (0);
	if (str[i] == '\0')
		return (0);
	return (1 + sized(str, ++i));
}
/**
  *string_nconcat - concatenate n chars from string
  *@s1: string1
  *@s2: string2
  *@n: int
  *Return: string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, n1, n2;
	char *out;

	if (s2 == NULL && s1 == NULL)
	{
		out = malloc(sizeof(char) * 2);
		if (out == NULL)
			return (NULL);
		out[0] = '\0';
	}
	n1 = sized(s1, 0);
	n2 = sized(s2, 0);
	if ((int)n >= n2)
	{
		out = malloc(sizeof(char) * (n1 + n2 + 1));
		if (out == NULL)
			return (NULL);
		for (i = 0; i < n1; i++)
			out[i] = s1[i];
		for (j = 0; j < n2; j++)
			out[i + j] = s2[j];
		out[i + j] = '\0';
	}
	else
	{
		out = malloc(sizeof(char) * (n1 + (int)n + 1));
		if (out == NULL)
			return (NULL);
		for (i = 0; i < n1; i++)
			out[i] = s1[i];
		for (j = 0; j < (int)n; j++)
			out[i + j] = s2[j];
		out[i + j] = '\0';
	}
	return (out);
}
