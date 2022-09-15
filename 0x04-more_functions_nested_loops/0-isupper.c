#include "main.h"

/**
 *isupper - checks if a character is upper case or not
 *@c: character to be tested
 * Returns: 1 if it is or 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
}
	return (0);
}
