#include "holberton.h"
/**
  *_strcpy - copies string
  *@dest: pointer to destination array of char
  *@src: string source
  *Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
