/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** copies the printf behavior
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void selector_printf_first(char *str, int index, va_list ap)
{
	switch (str[index]) {
		case 'd':
			my_put_nbr(va_arg(ap, int));
			break;
		case 'o':
			my_base_conv(va_arg(ap, int), 8, 0);
			break;
		case 'c':
			my_putchar(va_arg(ap, int));
			break;
		case 'x':
			my_base_conv(va_arg(ap, int), 16, 32);
			break;
		case 'X':
			my_base_conv(va_arg(ap, int), 16, 0);
			break;
		case 's':
			my_putstr(va_arg(ap, char *));
			break;
		case '%':
			my_putchar('%');
			break;
		case 'b':
			my_base_conv(va_arg(ap, int), 2, 0);
			break;
		default:
			my_putchar('%');
			my_putchar(str[index]);
			break;
	}
}

int my_printf(char *str, ...)
{
	int result = 0;
	int index = 0;
	va_list ap;

	if ((str == NULL) || (my_strlen(str) == 0))
		return (84);
	va_start(ap, str);
	while (str[index] != '\0') {
		if ((str[index] == '%') && (str[index + 1] != '\0')) {
			index++;
			selector_printf_first(str, index, ap);
		}
		else
			my_putchar(str[index]);
		index++;
	}
	va_end(ap);
	return (result);
}
