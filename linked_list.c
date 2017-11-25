/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** linked_list.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/push_swap.h"

List_t *initialisation(void)
{
	List_t *list = malloc(sizeof(*list));
	Element_t *element = malloc(sizeof(*element));

	if (list == NULL || element == NULL)
		return (84);
	element->nb = 0;
	element->next = NULL;
	list->first = element;
	return (list);
}

int insertion(List_t *list, int new_nb)
{
	Element_t *new = malloc(sizeof(*new));

	if (list == NULL || new == NULL)
		return (84);
	new->nb = new_nb;
	new->next = list->first;
	list->first = new;
	return (0);
}

int deletion(List_t *list)
{
	Element_t *to_delete = list->first;

	if (list == NULL)
		return (84);
	if (list->first != NULL) {
		list->first = list->first->next;
		free(to_delete);
	}
	return (0);
}

int free_list(List_t *list)
{
	if (list == NULL)
		return (84);
	while (list->first != NULL) {
		Element_t *temp = list->first;

		list->first = list->first->next;
		free(temp);
	}
	free(list);
	return (0);
}

int display(List_t *list)
{
	Element_t *actual = list->first;

	if (list == NULL)
		return (84);
	while (actual != NULL) {
		my_put_nbr(actual->nb);
		my_putchar(' ');
		actual = actual->next;
	}
	my_putstr("NULL\n");
	return (0);
}
