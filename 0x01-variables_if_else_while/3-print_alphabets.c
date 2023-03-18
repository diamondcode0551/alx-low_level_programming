#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Print alphabet in lower and upper casses
 * Return: Done (success)
 */


int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
