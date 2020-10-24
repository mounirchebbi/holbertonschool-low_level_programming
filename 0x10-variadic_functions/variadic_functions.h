#ifndef VARIADIC_HEADER
#define VARIADIC_HEADER
/**
  *struct specifiers - %specifiers of format
  *@a: %specifier
  *@b: format
  */
typedef struct specifiers
{
	char * a;
	char * b;
} specif;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
