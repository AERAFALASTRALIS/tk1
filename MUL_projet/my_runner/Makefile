##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

NAME = my_runner

FILES = my_runner.c	\
	my_sprite.c	\
	my_put_nbr.c	\
	init.c		\
	next.c		\

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
