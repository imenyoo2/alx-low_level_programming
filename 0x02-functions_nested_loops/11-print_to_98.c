#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	int add;

	if (n < 98)
	{
		add = 1;
	}
	else if (n == 98)
	{
		printf("98\n");
		return;
	}
	else
	{
		add = -1;
	}

	printf("%d", n);
	while (n != 98)
	{
		n = n + add;
		printf(", %d", n);
	}
	printf("\n");
}
