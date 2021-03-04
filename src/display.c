/*
** EPITECH PROJECT, 2017
** 102architect
** File description:
** functions to display
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "102architect.h"

void my_disp(char c, char *argo, char *argt)
{
	if (c == 't')
		printf("Translation by the vector (%s, %s)\n", argo, argt);
	else if (c == 'h')
		printf("Homothety by the ratios %s and %s\n", argo, argt);
	else
		exit(84);
}

void my_short_disp(char c, char *arg)
{
	if (c == 'r')
		printf("Rotation at a %s degree angle\n", arg);
	else if (c == 's') {
		printf("Symmetry about an axis inclined with an angle of ");
		printf("%s degrees\n", arg);
	}
	else
		exit(84);
}

int nb_operations(int ac, char **av)
{
	int index = 0;
	int nb = 0;
	while (index < ac) {
		if (av[index][0] == '-') {
			if (av[index][1] == 't' || av[index][1] == 'h') {
				my_disp(av[index][1], av[index+1], av[index+2]);
			}
			else if (av[index][1] == 's' || av[index][1] == 'r') {
				my_short_disp(av[index][1], av[index+1]);
			}
			nb++;
		}
		index++;
	}
	return (nb);
}
