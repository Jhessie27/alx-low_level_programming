#include <unistd.h>

/**
 * _putchar - outputs a character on a new line
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is printed and error is set appropriately
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

