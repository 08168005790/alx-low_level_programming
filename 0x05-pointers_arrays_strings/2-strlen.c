#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * written by cod-emminex
 * @a: char to check
 * Description: the function will return the length of a string
 * Return: Always 0
 */

int _strlen(char *a)
{
	int b = 0;

	for (; *a++;)
		b++;
	return (b);
}
