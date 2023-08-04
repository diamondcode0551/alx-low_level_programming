#include "main.h"

/**
 * set_bit - Set bit at an index to one
 * @n: Pointer to number which is to be changed
 * @index: Index of bit described above
 *
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
		return (1);
}
