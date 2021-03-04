/*
** EPITECH PROJECT, 2017
** 102architect
** File description:
** parse the passed ac/av for errors
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "102architect.h"

int isnum(char *str)
{
	int index = 0;

	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] != '\0') {
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

int check_sequence(char **av, int ac, int i, char type)
{
	switch (type) {
		case 't': case 'h':
			if (i + 2 >= ac)
				exit(84);
			else if (isnum(av[i+1]) == 0 || isnum(av[i+2]) == 0)
				exit(84);
			i = i + 3;
			break;
		case 'r': case 's':
			if (i + 1 >= ac)
				exit(84);
			else if (isnum(av[i+1]) == 0)
				exit(84);
			i = i + 2;
			break;
		default:
			exit(84);
			break;
	}
	return (i);
}

void my_check_input(int ac, char **av)
{
	int index = 3;

	if (ac < 3) {
		exit(84);
	}
	while (index < ac)
	{
		if (av[index][0] == '-') {
			if (strlen(av[index]) != 2)
				exit(84);
			index = check_sequence(av, ac, index, av[index][1]);
		}
		else {
			exit(84);
		}
	}
}
