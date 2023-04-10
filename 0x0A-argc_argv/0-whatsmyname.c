
#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: array of arguments passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
