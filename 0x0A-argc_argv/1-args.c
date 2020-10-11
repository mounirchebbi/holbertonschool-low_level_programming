#include <stdio.h>
/**
  *main- print number of attributes
  *@argc: size of argv, number of arguments
  *@argv: pointer to array containing arguments
  *Return: 0 when success
  */
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
