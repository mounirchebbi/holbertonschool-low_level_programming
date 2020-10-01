#include "holberton.h"
/**
  *_strncpy - copy n characters
  *@dest: destination pointer
  *@n: number of characters to copy
  *@src: source pointer
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

