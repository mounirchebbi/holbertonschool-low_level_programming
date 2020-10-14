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
	if (str == NULL)
		return (0);
	if (str[i] == '\0')
		return (0);
	return (1 + stringsize(str, ++i));
}
/**
  *argstostr- concatenate args
  *@ac: args size
  *@av: pointer to args array
  *Return: pointer to concatenated args
  */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *final;
	int k = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += stringsize(av[i], 0);
	final = malloc(sizeof(char) * size + 1);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			final[k] = av[i][j];
			k++;
		}
		final[k] = '\n';
		k++;
	}
	final[k] = '\0';
	return (final);
}
