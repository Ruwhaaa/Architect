/*
** EPITECH PROJECT, 2017
** my_base_conv
** File description:
** takes an int as input, output it's converted value as a str
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int num_len(int number)
{
	int number_len = 1;

	if (number == 0)
		return (0);
	while ((number / 10) > 0) {
		number = number / 10;
		number_len++;
	}
	return (number_len);
}

char *my_base_conv_defined(int number, int base, char *result, char *type)
{
	int reste;
	int index = 0;

	while ((number / base) != 0) {
		reste = number % base;
		if (reste > 9)
			result[index] = (reste - 10) + 'A' + type[1];
		else
			result[index] = reste + '0';
		number = number / base;
		index++;
	}
	reste = number % base;
	if (reste > 9)
		result[index] = (reste - 10) + 'A' + type[1];
	else
		result[index] = reste + '0';
	if (type[0] == 1)
		result[index+1] = '-';
	return (my_revstr(result));
}

void my_base_conv(int number, int base, int notation_type)
{
	char *result = malloc(sizeof(char) * 4096 + 1);
	char *type = malloc(sizeof(char) * 2);

	type[0] = 0;
	type[1] = 0;
	my_fill_str(result, 4097);
	if (base > 36 || base < 2)
		return;
	if (number < 0) {
		type[0] = 1;
		number = number * -1;
	}
	type[1] = notation_type;
	my_putstr(my_base_conv_defined(number, base, result, type));
	free(result);
}
