#include "holberton.h"
/**
  *_strcpy - copies string
  *@dest: pointer to destination array of char
  *@src: string source
  *Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; i < 98; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
