##
## EPITECH PROJECT, 2019
## makefill
## File description:
## makefill
##


NAME = my_sokoban

FILES = com.c \
	gest.c \
	leso.c \
	my_fonction_list.c \
	my_read.c \
	my_sokoban.c \
	run_to_abcd.c \

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES) -lncurses

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug:
	clear
	gcc -o $(NAME) $(FILES) -lncurses -Wall -Wextra -g3
