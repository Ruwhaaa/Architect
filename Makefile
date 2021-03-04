##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makes files
##

SRC	=	src/main.c		\
		src/error_detection.c	\
		src/display.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

CFLAGS	=	-W -Wall -I include

LDFLAGS	=	-L lib -l my

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make -C lib/my fclean

re:	fclean all

test:	all
	gcc -o "run_me_pls" ./test/unit_tests.c -lcriterion -L./lib/ -lmy -I/include/my.h

.PHONY:	clean fclean re test all
