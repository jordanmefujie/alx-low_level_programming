#include "main.h"
/**
 * _strncpy - Function to be copied
 * @src: Source string
 * @dest: Destination string
 * @n: Number to be copied
 * Return: The string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
