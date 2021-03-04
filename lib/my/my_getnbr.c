/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** takes a string, return its int value
*/

#include <stdlib.h>

int char_isnbr(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int my_getnbr(char const *str)
{
	int index = 0;
	int type = 1;
	int result = 0;

	while (str[index] != '\0')
	{
		if (str[index] == '-')
			type = -1;
		if (char_isnbr(str[index])) {
			result = result * 10;
			result = result + (str[index] - '0');
		}
		else
			exit(84);
		index++;
	}
	result = result * type;
	return (result);
}
