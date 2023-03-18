#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Prints lowerrcase alphabets in reverse
 * Return: Done (success)
 */

int main(void)

{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
	putchar('\n');

	return (0);
}
