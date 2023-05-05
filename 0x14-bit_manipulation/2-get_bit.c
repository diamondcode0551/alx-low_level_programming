#include "main.h"

/**
 * get_bit - Returns value of bit in a decimal number
 * @n: Number to be searched for
 * @index: Index of bit
 *
 * Return: The value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
