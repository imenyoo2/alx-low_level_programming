#include "main.h"



/**
 * get_endianness - check the endianess of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{

	char i = 1;

	if (*((char *) &i) + '0' == '1')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
