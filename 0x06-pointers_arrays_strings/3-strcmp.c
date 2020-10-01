#include "holberton.h"
/**
  *_strcmp - compare two strings
  *@s1: first string
  *@s2: second string
  *Return: result
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;
	int stop = 0;

	while (stop == 0)
	{
		if ((int) *(s1 + i) > (int) *(s2 + i))
		{
			stop = 1;
			result = 15;
		}
		else if ((int) *(s1 + i) < (int) *(s2 + i))
		{
			stop = 1;
			result = -15;
		}
		else if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		{
			stop = 1;
			result = 0;
		}
		i++;
	}
	return (result);
}

