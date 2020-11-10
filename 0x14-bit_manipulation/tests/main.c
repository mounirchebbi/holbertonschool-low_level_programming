#include <stdio.h>
#include <stdlib.h>
int power_two(int x)
{
	int i;
        int power = 1;
        if (x==0)
                return (1);
        for (i = 0; i < x; i++)
                power *= 2;
        return (power);
}

int main(void)
{
	int i, sum = 0, size;
	char *b = "11011";
	for (i = 0; b[i] !='\0'; i++);
	size = i-1;
	i = 0;
	/*printf("%d\n", i);
	i = power_two(0);
	printf("%d\n", i);
	i = power_two(1);
	printf("%d\n", i);
	i = power_two(2);
	printf("%d\n", i);
	i = power_two(3);
	printf("%d\n", i);*/
        while (b[i] != '\0')
        {
		if (b[i] < 48 || b[i] > 49)
			return (0);
		else
		{
			if (b[i] == '1')
                                sum += power_two(size);
                        size--;
                        i++;
                        printf("**%u**\n", sum);
		}
        }
        printf("**%u**\n", sum);

	return (0);
}	
