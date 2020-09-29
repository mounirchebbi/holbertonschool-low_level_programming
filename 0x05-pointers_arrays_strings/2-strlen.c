#include "holberton.h"
/**
  *_strlen - returns string lenght
  *@s: pointer to string
  *Return: lenght of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
