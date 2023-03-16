#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 1
 */
int main(void)
{
char data[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

fwrite(data, sizeof(char), 59, stderr);
return (1);
}
