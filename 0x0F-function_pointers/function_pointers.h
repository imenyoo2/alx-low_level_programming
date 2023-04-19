#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

