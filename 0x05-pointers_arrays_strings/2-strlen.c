#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to the string
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;

	return (len);
}
