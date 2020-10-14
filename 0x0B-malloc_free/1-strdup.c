#include "holberton.h"
#include <stdlib.h>
/**
  *stringsize - size of string
  *@str: string
  *@i: initialization
  *Return: size
  */
int stringsize(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	return (1 + stringsize(str, ++i));
}
/**
  *_strdup - duplicate string
  *@str: string
  *Return: duplicated string
  */
char *_strdup(char *str)
{
	int n, i;
	char *str2;

	if (str == NULL)
		return (NULL);
	n = stringsize(str, 0);
	str2 = malloc(sizeof(char) * n);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
