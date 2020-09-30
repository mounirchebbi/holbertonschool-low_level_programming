#include "holberton.h"
#include <stdio.h>
int main (void)
{
	char *ch = "-ajkjbakhb----***-*25hbjhb**";
	int i, j, n, sign, result, stop;

	i=0;
	sign = 1;
	result = 0;
	stop = 0;
	while ( *(ch+i) != '\0' && stop != 1 )
	{
		n = (int) *(ch+i);

		if ( n == 45 )
		{
			sign = sign * (-1);
			i++;
		}
		else if ( n >= 48 && n <= 57 )
		{
			if (sign == -1)
			{
				_putchar ('-');
			}
			_putchar (n);
			result = result + (n-48);
			j = i+1 ;
			while ( (int) *(ch+j) >=48 && (int) *(ch+j) <= 57 && *(ch+j) != '\0')
			{ 
				n = (int) *(ch+j);
				_putchar (n);
				result = result * 10 + (n-48); 
				j++;
			}

			result = result * sign; 
			stop = 1;
		}
		else
		{
			i++;
		}
	}
	printf ("**result %d\n", result);

		return (0);
}
	


