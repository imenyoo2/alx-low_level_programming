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
if (a == 'q' || a == 'e')
{
a += 1;
continue;
}
putchar(a);
a += 1;
}
putchar('\n');

{return 0; }
}
