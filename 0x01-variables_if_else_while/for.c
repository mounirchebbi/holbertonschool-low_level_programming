#include <stdio.h>
int main(void)
{	
int i,j,n,k;
for (i=0;i<=9;i++)
{
	for(j=i+1;j<=9;j++)
	{
		for(k=j+1;k<=9;k++)
		{
		putchar('0'+i);
		putchar('0'+j);
		putchar('0'+k);
		n= i*100+j*10+k;
		if(n<789)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		}
	}
}
return(0);
}

