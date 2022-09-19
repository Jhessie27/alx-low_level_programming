#include <unistd.h>

/**
 * _puchar.c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error -1 i returned, and errno is set appropeately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

