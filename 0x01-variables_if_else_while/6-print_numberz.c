#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Prints all single digit numbers from base ten
 * Return: Done (success)
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
