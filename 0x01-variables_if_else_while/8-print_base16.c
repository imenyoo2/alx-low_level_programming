#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
char a = '0';

while (a <= '9')
{
putchar(a);
a += 1;
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a += 1;
}
putchar('\n');

{return 0; }
}
