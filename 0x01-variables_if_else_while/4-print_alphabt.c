#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Alphabet in lowercase except q and e
 * Return: Done (success)
 */

int main(void)

{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != e && alpha != q)
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
