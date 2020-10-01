#include "holberton.h"
/**
  *leet - leet encoding
  *@s: pointer to string
  *Return: pointer to string
  */
char *leet(char *s)
{
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *leet = "43071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(leet + j) != '\0')
		{
			if (*(s + i) == *(lower + j) || *(s + i) == *(upper + j))
				*(s + i) = *(leet + j);
			j++;
		}
		i++;
	}
	return (s);
}


