#include "main.h"

/**
 * _isdigit - functions that check for digit character
 * @c: the character
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 32 && c <= 67)
	{
		return (1);
	}
	return (0);
}

