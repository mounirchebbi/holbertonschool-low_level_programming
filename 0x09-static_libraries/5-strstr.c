#include "holberton.h"
/**
  *_strstr- locates a substring
  *@haystack:pointer to string
  *@needle:pointer to string
  *Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; *(haystack + i) != '\0'; i++)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j))
		{
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return (0);
}


