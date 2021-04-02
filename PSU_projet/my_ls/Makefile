##
## EPITECH PROJECT, 2020
## make
## File description:
## make
##

NAME = my_ls

FILES = my_ls.c 	\
	my_strdup.c	\
	my_putchar.c	\
	my_colo_ls.c	\
	my_rev_tri.c

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
