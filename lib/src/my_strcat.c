/*
** EPITECH PROJECT, 2017
** Library
** File description:
** my_strcat.c
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char *src)
{
	int len;
	int i = 0;

	len = my_strlen(dest);
	while (src[i])
		dest[len + i] = src[i++];
	dest[len + i] = '\0';
	return (dest);
}
