/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** push_swap.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/push_swap.h"

void check_end(List *lb)
{
	if (lb->first->next == NULL)
		my_putstr("pa");
	else
		my_putstr("pa ");
}

int special_cases(int ac, char **av)
{
	int j = 0;

	if (ac == 2 || ac > 1001) {
		my_putchar('\n');
		return (1);
	}
	for (int i = 1; av[i + 1]; i++) {
		if (my_getnbr(av[i]) > my_getnbr(av[i + 1]))
			j++;
	}
	if (j == 0) {
		my_putchar('\n');
		return (1);
	}
	return (0);
}

void sorter(List *la, List *lb)
{
	if (la->first->nb > la->first->next->nb) {
		swap(la);
		my_putstr("sa ");
	}
	if (lb->first->next == NULL) {
		pb(lb, la);
		my_putstr("pb ");
	} else if (lb->first->nb > la->first->nb) {
		pa(la, lb);
		my_putstr("pa ");
	} else {
		pb(lb, la);
		my_putstr("pb ");
	}
}

int main(int ac, char **av)
{
	List *la = initialisation(ac, av);
	List *lb = initialisation(ac, av);

	if (ac == 1)
		return (84);
	if (special_cases(ac, av) == 1)
		return (0);
	for (int i = ac - 1; i != 0; i--)
		insertion(la, my_getnbr(av[i]));
	while (la->first->next->next != NULL)
		sorter(la, lb);
	while (lb->first->next != NULL) {
		pa(la, lb);
		check_end(lb);
	}
	free_list(la);
	free_list(lb);
	my_putchar('\n');
	return (0);
}
