#ifndef BIT_HEADER
#define BIT_HEADER
#include <unistd.h>
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
#endif