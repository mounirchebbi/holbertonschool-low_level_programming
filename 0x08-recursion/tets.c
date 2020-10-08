#include "holberton.h"
#include <stdio.h>
/**
  *
  *
  */
int pal (char *s, char *p)
{
	if (*s == *p)
	{
		s++;
		p--;
	return (pal (s, p));
	}
	else
	{
		return (0);
	}
}
/**
  *
  */
int is_palindrome(char *s)
{
	char *p;
	if (*s == '\0')
		return (0);
	else if (*(s+1) == '\0')
		return (0);
	else
	{
		for (p=s; *p> '\0'; p++);
		p--;
		printf ("%c\n", *s);
		printf ("%c\n", *p);
		return (pal(s, p));
	}
}
int main (void)
{
	char *s = "1234";
	int n = is_palindrome(s);
	printf("%d\n", n);
	return (0);
}
