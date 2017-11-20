/*
** EPITECH PROJECT, 2017
** Library
** File description:
** my_putstr.c
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i += 1;
	}
}
