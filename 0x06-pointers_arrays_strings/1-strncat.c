#include "holberton.h"
/**
  *_strncat - concatenate n characters
  *@dest: destination pointer
  *@n: number of characters to concatenate
  *@src: source pointer
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	if (n > 0)
	{
		while (*(src + j) != '\0' && n > 0)
		{
			*(dest + i + j) = *(src + j);
			j++;
			n--;
		}
		*(dest + i + j) = '\0';
	}
	return (dest);
}

