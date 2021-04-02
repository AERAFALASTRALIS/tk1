##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_getnbr.c			\
		my_getnbr2.c			\
		my_putchar.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_put_nbr.c			\
		my_strncat.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -c -I./
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include
	cp my.h ../../include
	cp $(NAME) ../$(NAME)

clean:
	rm $(OBJ)

fclean:
	rm ../$(NAME)
	rm $(NAME)
	rm -r ../../include

re:
	make all
	make fclean
	make all
