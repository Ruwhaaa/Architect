/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Takes an int as an input then output it in the console
*/

void my_putchar(char);

void over_ten(int *nb, int *i, int *modulo, int *n)
{
	while ((*nb / *i) > 10) {
		*i = *i * 10;
	}
	while (*i >= 10) {
		*modulo = *nb % *i;
		*n = (*nb - *modulo) / *i;
		my_putchar('0' + *n);
		*i = *i / 10;
		*nb = *modulo;
	}
	my_putchar('0' + *nb);
}

int my_put_nbr(int nb)
{
	int i = 10;
	int modulo;
	int n;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10) {
		my_putchar('0' + nb);
	}
	else {
		over_ten(&nb, &i, &modulo, &n);
	}
	return (0);
}
