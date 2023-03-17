#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
char arr[7];
int ones;
int tens;
int i;
int j;
int k;

arr[2] = ' ';
arr[5] = ',';
arr[6] = ' ';
for (i = 0; i <= 98; i++)
{
if (i < 10)
{
arr[0] = '0';
arr[1] = '0' + i;
}
else
{
ones = i % 10;
tens = 0;
while ((tens + 1) * 10 <= i)
{
tens++;
}
arr[0] = '0' + tens;
arr[1] = '0' + ones;
}
for (j = i + 1; j <= 99; j++)
{
if (j < 10)
{
arr[3] = '0';
arr[4] = '0' + j;
}
else
{
ones = j % 10;
tens = 0;
while ((tens + 1) * 10 <= j)
{
tens++;
}
arr[3] = '0' + tens;
arr[4] = '0' + ones;
}
if (i == 98 && j == 99)
{
continue;
}
for (k = 0; k < 7; k++)
{
putchar(arr[k]);
}
}
}
for (k = 0; k < 5; k++)
{
putchar(arr[k]);
}
putchar('\n');

{return 0; }
}
