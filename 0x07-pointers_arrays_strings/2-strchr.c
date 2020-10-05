#include "holberton.h"
#include <stdlib.h>
/**
  *_strchr- locate first occurance of char in string
  *@s:pointer to string
  *@c:char to locate
  *Return: pointer
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *l = NULL;
	int stop = 0;

	while (*(s + i) != '\0' && stop == 0)
	{
		if (*(s + i) == c)
		{
			l = s + i;
			stop = 1;
		}
		i++;
	}
	return (l);
}
