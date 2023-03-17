#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a += 1;
}
a = 'A';
while (a <= 'z')
{
putchar(a);
a += 1;
}
putchar('\n');

{return 0; }
}
