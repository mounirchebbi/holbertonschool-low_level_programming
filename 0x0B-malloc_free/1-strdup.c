#include "holberton.h"
#include <stdlib.h>
/**
  *sizestr- size of char
  *@str: string
  *@i:initialisation
  *Return: size
  */
int sizestr(char *str, int i)
{
	if (*(str + i) == '\0')
		return (0);
	return (1 + sizestr(str, ++i));
}
/**
  *_strdup- duplicate string
  *@str: string to duplicate
  *Return: duplicated string
  */
char *_strdup(char *str)
{
	int n, i;
	char *p;

	if (str == NULL)
		return (NULL);
	n = sizestr(str, 0);
	p = malloc(sizeof(char) * n);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
