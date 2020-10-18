#include "holberton.h"
#include <stdlib.h>
/**
  *sized- size of single word
  *@in : string
  *@i: initialisation
  *Return: size
  */
int sized(char *in, int i)
{
	if (in[i] == ' ' || in[i] == '\0')
		return (0);
	return (1 + sized(in, ++i));
}
/**
  *numberword- number of words
  *@in : string
  *@i : initialisation
  *Return: number
  */
int numberword(char *in, int i)
{
	if (in[i] != ' ' && in[i + 1] == '\0')
		return (1);
	else if (in[i] != ' ' && in[i + 1] == ' ')
		return (1 + numberword(in, ++i));
	else if (in[i] == '\0')
		return (0);
	return (numberword(in, ++i));
}
/**
  *strtow- string to words
  *@str: string
  *Return: array of words
  */

char **strtow(char *str)
{
	int k;
	int size;
	int i = 0;
	int j;
	char **out;
	int nw = numberword(str, 0);

	if (str == NULL || str[0] == '\0')
		return (NULL);
	out = malloc(nw * sizeof(char *) + 1);
	if (out == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		if ((j == 0 && str[j] != ' ') || (str[j - 1] == ' ' && str[j] != ' '))
		{
			size = sized(str, j);
			out[i] = malloc(sizeof(char) * size);
			for (k = 0; k < size; k++)
				out[i][k] = str[j + k];
				out[i][k] = '\0';
				i++;
		}
	}
	out[i] = NULL;
	return (out);
}
