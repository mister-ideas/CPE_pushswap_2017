/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** operations.c
*/

#include "include/my.h"
#include "include/push_swap.h"

void swap(List_t *list)
{
	int temp = list->first->nb;

	list->first->nb = list->first->next->nb;
	list->first->next->nb = temp;
}

void pa(List_t *la, List_t *lb)
{
	insertion(la, lb->first->nb);
	deletion(lb);
}

void pb(List_t *lb, List_t *la)
{
	insertion(lb, la->first->nb);
	deletion(la);
}
