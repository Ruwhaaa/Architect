/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** reverse a string
*/

char *my_strcpy(char *, char const *);
int my_strlen(char *str);

char *my_revstr(char *str)
{
	int x = my_strlen(str);
	char dest[x+1];
	my_strcpy(dest, str);
	int i = 0;
	int lenght = my_strlen(str);

	while (i < lenght) {
		str[i] = dest[lenght - 1 - i];
		i++;
	}
	return (str);
}
