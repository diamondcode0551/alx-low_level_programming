#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int lastd;

	lastd = n % 10;
	{
	lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
