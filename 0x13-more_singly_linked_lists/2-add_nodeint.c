#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
*
*@head: double pointer to listint_t list
*@n: new integer to add to each new node
*
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new->n = n;

		printf("%d\n", new->n);
//		new->next = &head;
		head = &new;


//	return (new);
}
