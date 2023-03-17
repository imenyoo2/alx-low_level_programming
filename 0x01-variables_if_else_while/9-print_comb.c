#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int a = 48;
int i;

while (a <= 56)
{
putchar(a);
for (i = 44; i >= 32; i -= 12)
{
putchar(i);
}
a += 1;
}
putchar(57);
putchar('\n');

{return 0; }
}
