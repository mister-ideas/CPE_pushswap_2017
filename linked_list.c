/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** linked_list.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/push_swap.h"

List *initialisation()
{
	List *list = malloc(sizeof(*list));
	Element *element = malloc(sizeof(*element));

	if (list == NULL || element == NULL)
		return (1);
	element->nb = 0;
	element->next = NULL;
	list->first = element;
	return (list);
}

int insertion(List *list, int new_nb)
{
	Element *new = malloc(sizeof(*new));

	if (list == NULL || new == NULL)
		return (1);
	new->nb = new_nb;
	new->next = list->first;
	list->first = new;
	return (0);
}

int deletion(List *list)
{
	Element *to_delete = list->first;

	if (list == NULL)
		return (1);
	if (list->first != NULL) {
		list->first = list->first->next;
		free(to_delete);
	}
	return (0);
}

int display(List *list)
{
	Element *actual = list->first;

	if (list == NULL)
		return (1);
	while (actual != NULL) {
		my_put_nbr(actual->nb);
		my_putchar(' ');
		actual = actual->next;
	}
	my_putstr("NULL\n");
	return (0);
}
