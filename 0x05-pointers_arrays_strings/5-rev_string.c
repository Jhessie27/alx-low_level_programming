#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: Input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len _strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

