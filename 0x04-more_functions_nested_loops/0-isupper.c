#include "main.h"

/**
 * _isupper - Checks if a letter is upper case
 * @x: The number to be checked
 * Return: 1 for upper case letter or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}
