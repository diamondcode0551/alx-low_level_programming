#include "main.h"

/**
 * get_endianness - Checks the order in which bytes are stored
 * Return: 1 for small and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
