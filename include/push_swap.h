/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** push_swap.h
*/

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct Element_t Element_t;
struct Element_t
{
	int nb;
	Element_t *next;
};

typedef struct List_t List_t;
struct List_t
{
	Element_t *first;
};

List_t *initialisation(void);

int insertion(List_t *list, int new_nb);
int deletion(List_t *list);
int display(List_t *list);
int free_list(List_t *list);

void swap(List_t *list);
void pa(List_t *la, List_t *lb);
void pb(List_t *lb, List_t *la);

#endif
