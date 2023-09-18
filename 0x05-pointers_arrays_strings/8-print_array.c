#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * written by cod-emminex
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
		if (z != n - 1)
			printf("%d, ", a[z]);
		else
			printf("%d", a[z]);
	printf("\n");
}
