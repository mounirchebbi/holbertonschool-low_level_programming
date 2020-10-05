#include "holberton.h"
/**
  *_memcpy- copy n byte of memory pointed by *s with char b
  *@dest:pointer to destination
  *@src:pointer to source
  *@n:number of bytes
  *Return: pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
