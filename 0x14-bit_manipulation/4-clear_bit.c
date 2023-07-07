#include "main.h"

/**
 * clear_bit - Set value of bit
 * @n: Pointer
 * @index: Index of bit
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
