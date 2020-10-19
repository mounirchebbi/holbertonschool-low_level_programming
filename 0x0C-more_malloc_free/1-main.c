#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	    char *concat;
	    char *concat1;
	    char *concat3;
	    char *concat2;

	        concat = string_nconcat("Holberton ", "School !!!", 6);
		    printf("%s\n", concat);
		    concat1 = string_nconcat("Hello", NULL, 12);
		    printf("%s\n", concat1);
		    concat2 = string_nconcat(NULL, "Hello", 2);
		    printf("%s\n", concat2);
		    concat3 = string_nconcat(NULL, NULL, 10);
		    printf("%s\n", concat3);
		        free(concat);
			free(concat1);
			/*free(concat3);*/
			free(concat2);
			    return (0);
}
