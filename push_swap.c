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

int main(int ac, char **av)
{
	List *nombres = initialisation(ac, av);

	if (ac == 1)
		return (84);
	if (special_cases(ac, av) == 1)
		return (0);
	for (int i = ac - 2; i != 0; i--)
		insertion(nombres, my_getnbr(av[i]));
	display(nombres);
	return (0);
}
