#include "holberton.h"
#include <stdio.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	    char *s = "hello, world";
	        char *f = "world";
		    char *t;

		        t = _strpbrk(s, f);
			    printf("%s\n", t);
			    t = _strpbrk("First, solve the problem. Then, write the code.", "[]{}()");
			    printf("%p\n", t);
			        return (0);
}
