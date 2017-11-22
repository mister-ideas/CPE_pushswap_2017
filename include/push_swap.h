/*
** EPITECH PROJECT, 2017
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

List *initialisation(int ac, char **av);
int insertion(List *list, int new_nb);
int deletion(List *list);
int display(List *list);

#endif
