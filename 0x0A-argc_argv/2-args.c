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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
