
#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of args passed
 * @argv: array of args passed
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
