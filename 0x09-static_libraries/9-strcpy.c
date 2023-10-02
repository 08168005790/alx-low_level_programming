#include "main.h"

/**
 * _strcpy - function that copy the string pointed to the src to dest
 * @dest: char to check
 * @src: char to check
 * written by cod-emminex
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
		dest[z] = src[z];
	dest[z] = '\0';
	return (dest);
}
