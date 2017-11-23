/*
** EPITECH PROJECT, 2017
** PushSwap
** File description:
** push_swap.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/push_swap.h"

int special_cases(int ac, char **av)
{
	int j = 0;

	if (ac == 2) {
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
		my_putchar(' ');
	}
	if (lb->first->next == NULL) {
		pb(lb, la);
		my_putchar(' ');
	} else if (lb->first->nb > la->first->nb) {
		pa(la, lb);
		my_putchar(' ');
	} else {
		pb(lb, la);
		my_putchar(' ');
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
		if (lb->first->next != NULL)
			my_putchar(' ');
	}
	my_putchar('\n');
	return (0);
}
