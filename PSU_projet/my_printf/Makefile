##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_printf
##

NAME = libmy.a

FILES =	my_printf.c 		\
	my_put_b.c		\
	my_putchar.c		\
	my_putcharin.c		\
	my_put_nbr_base.c	\
	my_put_nbr.c		\
	my_put_u.c		\
	my_putstr.c		\
	my_putstrin.c		\
	my_put_s2.c		\
	my_strlen.c

OBJ =	$(FILES:.c=.o)

all :	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	chmod 777 libmy.a

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
