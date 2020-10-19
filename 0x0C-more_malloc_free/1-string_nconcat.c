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
	int i, n1, n2;
	char *out;
	char *clone;
	int n3 = (int) n;

	if (s2 == NULL && s1 == NULL)
		return (NULL);
	else if (s2 == NULL || n <= 0)
		return (s1);
	n1 = sized(s1, 0);
	n2 = sized(s2, 0);
	clone = malloc(sizeof(char) * n1 + 1);
	if (clone == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		clone[i] = s1[i];
	clone[i] = '\0';
	out = realloc(clone, n);
	if (out == NULL)
		return (NULL);
	if (n2 <= n3)
	{
		for (i = 0; i < n2; i++)
			out[n1 + i] = s2[i];
		out[n1 + i] = '\0';
	}
	else
	{
		for (i = 0; i < n3; i++)
			out[n1 + i] = s2[i];
		out[n1 + i] = '\0';
	}
return (out);
}
