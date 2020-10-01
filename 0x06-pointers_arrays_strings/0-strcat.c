#include "holberton.h"
/**
  *_strcat - concatenate two strings
  *@dest: pointer to destination string
  *@src: pointer to source string
  *Return: pointer to destination string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
