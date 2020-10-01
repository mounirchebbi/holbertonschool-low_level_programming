#include "holberton.h"
/**
  *cap_string - words to uppercase
  *@s: pointer to string
  *Return: pointer to string
  */
char *cap_string(char *s)
{
	int i = 0;
	int n, m;

	while (*(s + i) != '\0')
	{
		n = (int) *(s + i);
		if (n >= 97 && n <= 122)
		{
			if (i == 0)
			*(s + i) = n - 32;
			else
			{
				m = (int) *(s + (i - 1));
				if (m == 41 || m == 46 || m == 59 || m == 63 || m == 123 || m == 125)
					*(s + i) = n - 32;
				else if (m == 32 || m == 10 || m == 9 || m == 33 || m == 34 || m == 40)
					*(s + i) = n - 32;
			}
		}

		i++;
	}
	return (s);
}

