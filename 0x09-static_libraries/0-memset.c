#include "holberton.h"
/**
  *_memset- fill n byte of memory pointed by *s with char b
  *@s:pointer to memory start*
  *@b:char fill memory
  *@n:number of bytes
  *Return: pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
