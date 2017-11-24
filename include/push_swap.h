/*
1;4804;0c** EPITECH PROJECT, 2017
** PushSwap
** File description:
** push_swap.h
*/

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct Element Element;
struct Element
{
	int nb;
	Element *next;
};

typedef struct List List;
struct List
{
	Element *first;
};

List *initialisation();

int insertion(List *list, int new_nb);
int deletion(List *list);
int display(List *list);
int free_list(List *list);

void swap(List *list);
void pa(List *la, List *lb);
void pb(List *lb, List *la);

#endif
