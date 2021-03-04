##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## compiles and clean a dir
##

SRC	=	my_putstr.c			\
		my_putchar.c			\
		my_revstr.c			\
		my_strcpy.c			\
		my_strlen.c			\
		my_put_nbr.c			\
		my_getnbr.c			\
		my_printf.c			\
		my_base_conv.c			\
		my_fill_str.c			\
		my_str_isnum.c


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include

all:	$(NAME)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#*

fclean:	clean
	rm -f $(NAME)
	rm -f ../libmy.a

re:	fclean all
