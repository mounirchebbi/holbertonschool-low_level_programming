#include <stdio.h>
/**
  *main- print executable name
  *@argc: size of argv, number of arguments
  *@argv: pointer to array containing arguments
  *Return: 0 when success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
