/*
** EPITECH PROJECT, 2017
** 102architect
** File description:
** vector calculator
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "102architect.h"

/*
void my_translation;

void my_homothety;

void my_rotation;

void my_symmetry;

void my_junction;

void my_display;
*/

int main(int ac, char **av)
{
	float coord_x;
	float coord_y;
	int nb_op;
	//int *result_matrice = malloc(sizeof(int) * 9);

	my_check_input(ac, av);
	coord_x = atof(av[1]);
	coord_y = atof(av[2]);
	nb_op = nb_operations(ac, av);
	printf("Nombre d'opérations: %d\n", nb_op);
	printf("Valeur x: %.f\nValeur y: %.f\n", coord_x, coord_y);
	return (0);
}
