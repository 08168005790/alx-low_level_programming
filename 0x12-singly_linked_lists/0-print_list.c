#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @e: placeholder for name of the list
 * Return: the number of nodes always.
 */

size_t print_list(const list_t *e)
{
	int count = 0;

	while (e)
	{
		if (e->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", e->len, e->str);
		}
		count++;
		e = e->next;
	}
	return (count);
}
