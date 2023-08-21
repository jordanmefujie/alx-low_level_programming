#include "main.h"
#include <stddef.h>
/**
 * _strcpy - copy a string
 * @dest: Frist parameter
 * @src: Second parameter
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
