
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of args passed
 * @argv: array of args passed
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char **argv)
{
	int amount;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount <= 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", min_coin_combinations(amount));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * min_coin_combinations - Returns the minimum number of coin combinations
 *                         required to add up to a given value.
 * @n: The value to add up to using coin combinations.
 *
 * Return: The minimum number of coin combinations required to add up to n.
 */
int min_coin_combinations(int n)
{
	int num_coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; i < 5; i++)
	{
		num_coins += n / coin_values[i];
		n = n % coin_values[i];
	}

	return (num_coins);
}
