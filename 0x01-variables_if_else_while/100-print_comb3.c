#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i;
int j;
int k;

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (j == 57 && i == 56)
{
continue;
}
for (k = 44; k >= 32; k -= 12)
{
putchar(k);
}
}
}
putchar('\n');

{return 0; }
}
