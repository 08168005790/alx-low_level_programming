#include "main.h"

/**
 * swap_int - function that swaps the values of int a and int b
 * written by cod-emminex
 * @a: first int
 * @b: second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
