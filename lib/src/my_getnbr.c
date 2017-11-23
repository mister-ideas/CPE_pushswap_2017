/*
** EPITECH PROJECT, 2017
** Library
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int nb = 0;
	int neg = 0;

	while (str[i]) {
		while (str[i] == '+' || str[i] == '-') {
			if (str[i] == '-') {
				neg++;
			}
			i += 1;
		}
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		if (str[i] < '0' || str[i] > '9') {
			if (neg % 2 == 1)
				nb = nb * -1;
			return (nb);
		}
		i++;
	}
	if (neg %2 == 1)
		nb = nb * -1;
	return (nb);
}
