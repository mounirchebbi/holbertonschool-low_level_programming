#include <stdlib.h>
#include <stdio.h>
/**
  *stringsize - size of string
  *@str: string
  *@i: initialization
  *Return: size
  */
int stringsize(char *str, int i)
{
	if (str == NULL)
		return (0);
	if (str[i] == '\0')
		return (0);
	return (1 + stringsize(str, ++i));
}
/**
  *str_concat - concatenate 2 strings
  *@s1: string1
  *@s2: string2
  *Return: string
  */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, j;
	int i = 0;
	char *s12;

	n1 = stringsize(s1, 0);
	n2 = stringsize(s2, 0);
	s12 = malloc(sizeof(char) * (n1 + n2 + 1));
	if (s12 == NULL)
		return (NULL);
	for (; i < n1; i++)
	{
		s12[i] = s1[i];
	}
	for (j = i; j < n1 + n2; j++)
	{
		s12[j] = s2[j - i];
	}
	s12[i + j] = '\0';
	return (s12);
}
