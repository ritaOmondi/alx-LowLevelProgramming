#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h : pointer of data type
 * @list_t : input
 *
 * Return : number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%d]%s\n", h->len, h->str);
	h = h->next;
	a++;
	}
	return (a);
}
