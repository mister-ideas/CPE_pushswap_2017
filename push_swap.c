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

void swap(List *list)
{
	int temp = list->first->nb;

	list->first->nb = list->first->next->nb;
	list->first->next->nb = temp;
	my_putstr("sa");
}

void pa(List *la, List *lb)
{
	insertion(la, lb->first->nb);
	deletion(lb);
	my_putstr("pa");
}

void pb(List *lb, List *la)
{
	insertion(lb, la->first->nb);
	deletion(la);
	my_putstr("pb");
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
	while (la->first->next->nb != 0) {
		if (la->first->nb > la->first->next->nb) {
			swap(la);
			my_putchar(' ');
		}
		if (lb->first->nb > la->first->nb) {
			pa(la, lb);
			my_putchar(' ');
		}
		else {
			pb(lb, la);
			my_putchar(' ');
		}
	}
	while (lb->first->nb != 0) {
		pa(la, lb);
		if (lb->first->nb != 0)
			my_putchar(' ');
	}
	my_putchar('\n');
	return (0);
}
