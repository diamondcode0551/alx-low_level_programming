#include "main.h"

/**
 * set_bit - Set bit at an index
 * @n: Pointer to num
 * @index: Index of bit
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
		return (1);
}
