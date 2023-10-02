#include "main.h"

/**
 * _strcmp - a code to compare 2 strings
 * @s1: string to compare
 * @s2: strmp
 * Return: int
 * written by cod-emminex
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
