#include "main.h"

/**
 * get_endianness - Check the order of bytes
 * Return: 1 for small and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
