#include <stdio.h>
int main(void)
{
int k=0;
int b = 0;
int a,i,j;
j=0;
a=0;
do {
	i = 0;
do {
do {
 do {
	 a++;
	 if( (a!=i) && (b!=j) && (i!=j))
	 {
		 putchar('0'+i);
		 putchar('0'+j);
		 putchar(' ');
		 putchar(',');
		 i++;

	 }
	 else
	 {
		 i++;
	 }
//	 putchar('0'+i);
//	 putchar('0'+j);
//	 putchar(' ');
//	 putchar(',');
 } while (a<9);
b++;
 k++;
 a =0+k; 
} while (b<9);
} while (i<=9);
j++;
} while (j<=9);

return (0);
}
