/*
** EPITECH PROJECT, 2017
** my_fill_str
** File description:
** fill a str with '\0s'
*/

char *my_fill_str(char *to_fill, int len)
{
	int index = 0;
	while (index < len)
	{
		to_fill[index] = '\0';
		index++;
	}
	return (to_fill);
}
