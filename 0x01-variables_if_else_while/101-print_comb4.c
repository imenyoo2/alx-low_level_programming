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
int l;

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (l = j + 1; l <= 57; l++)
{
putchar(i);
putchar(j);
putchar(l);
if (j == 56 && i == 55 && l == 57)
{
continue;
}
for (k = 44; k >= 32; k -= 12)
{
putchar(k);
}
}
}
}
putchar('\n');

{return 0; }
}
