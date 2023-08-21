#include <stdio.h>
/**
 * _strlen - Return the length of a string
 * @s: The string to return the length of
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
