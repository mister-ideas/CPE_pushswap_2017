/*
** EPITECH PROJECT, 2017
** my_ls_bootstrap
** File description:
** info_file.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int ac, char **av)
{
	struct stat s;

	if (stat("Makefile", &s) == -1) {
		write(1, "File not found\n", 15); 
		return (84);
	}
	write(1, "Name:   ", 8);
	return (0);
}
