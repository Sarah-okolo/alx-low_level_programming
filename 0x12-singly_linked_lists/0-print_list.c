#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: argument for new list_t node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t count = 1;

	while (h != NULL)
	{

		if (h->str != NULL)
		{
		printf("%s\n", h->str);
		}
		else
		{
		printf("[0] (nil)\n");
		break;
		}
		h = h->next;
		count++;
	}
		printf("%lu\n", count);
		return (count);
}
