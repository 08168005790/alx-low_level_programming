#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - to return the number of elements in the linked list.
 * @e: name of the list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *e)
{
	int count = 0;

	while (e)
	{
		count++;
		e = e->next;
	}
	return (count);
}
