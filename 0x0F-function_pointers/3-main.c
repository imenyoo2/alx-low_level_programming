#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if succeed, 98 if number of argus is wrong
 * 99 if op is wrong and 100 if / or % by 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
